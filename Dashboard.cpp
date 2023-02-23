//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Dashboard.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyEndForm *MyEndForm;
//---------------------------------------------------------------------------
__fastcall TMyEndForm::TMyEndForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TMyEndForm::SubmitButtonClick(TObject *Sender)
{
    if(CheckBox1->IsChecked && CheckBox2->IsChecked && CheckBox3->IsChecked && CheckBox4->IsChecked && CheckBox5->IsChecked){
		msg->Text="Great, You have finished all your habits!";
	}
}
//---------------------------------------------------------------------------

