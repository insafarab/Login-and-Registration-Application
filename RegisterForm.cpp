//---------------------------------------------------------------------------

#include <fmx.h>
#include<fstream>
#pragma hdrstop

#include "RegisterForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyRegisterForm *MyRegisterForm;
//---------------------------------------------------------------------------
__fastcall TMyRegisterForm::TMyRegisterForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyRegisterForm::SaveButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("registeredUsers.txt", ios::app);
	if(myFile.is_open()){
		AnsiString name=nameEdit->Text;
		AnsiString age=ageEdit->Text;
		AnsiString username=usernameEdit->Text;
		AnsiString password=passwordEdit->Text;

		myFile<<name<<","<<age<<","<<username<<","<<password<<"\n";
		myFile.close();
		this->Close();
	}
}
//---------------------------------------------------------------------------
void __fastcall TMyRegisterForm::FormClose(TObject *Sender, TCloseAction &Action)

{
    nameEdit->Text="";
	ageEdit->Text="";
	usernameEdit->Text="";
	passwordEdit->Text="";
}
//---------------------------------------------------------------------------

