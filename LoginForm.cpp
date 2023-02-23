//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include<string>
#include<vector>
#include<sstream>
#pragma hdrstop

#include "LoginForm.h"
#include "Dashboard.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
__fastcall TMyLoginForm::TMyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
std::vector<std::string> parseCommaDelimitedString(std::string line){
	std::vector<std::string> result;
	std::stringstream s_stream(line);

	while(s_stream.good()){
		std::string substr;
		getline(s_stream,substr,',');
		result.push_back(substr);
	}
	return result;
}

const char* converToCharPtr(AnsiString ansistr){
	return ansistr.c_str();
}

//---------------------------------------------------------------------------
void __fastcall TMyLoginForm::LoginButtonClick(TObject *Sender)
{
if(UsernameEdit->Text=="" || PasswordEdit->Text=="" ){
	msgLabel->Text="Enter the required fields.";
}
else{
	fstream myFile;
	myFile.open("registeredUsers.txt", ios::in);
	if(myFile.is_open()){
		std::string line;

		while(getline(myFile,line)){
			std::vector<std::string> parseLine=parseCommaDelimitedString(line);
			const char* username=parseLine.at(2).c_str();

			//AnsiString editUsername=UsernameEdit->Text;
			//const char* usernameString= editUsername.c_str();

			if(std::strcmp(username, converToCharPtr(UsernameEdit->Text))==0){
				const char* password=parseLine.at(3).c_str();

				//AnsiString editPassword=PasswordEdit->Text;
				//const char* passwordString= editPassword.c_str();

				if(std::strcmp(password, converToCharPtr(PasswordEdit->Text))==0){
					msgLabel->Text="You have succesfully loged in!";
					UsernameEdit->Text="";
					PasswordEdit->Text="";
					MyEndForm->Show();
					MyLoginForm->Close();
				}
				else{
					msgLabel->Text="The password is incorrect!";
					UsernameEdit->Text="";
					PasswordEdit->Text="";
				}

			}

				/*if(!getline(myFile,line) && msgLabel->Text!="You have succesfully loged in!" && msgLabel->Text!="The password is incorrect!")
				{
					msgLabel->Text="The username is incorrect!";
					UsernameEdit->Text="";
					PasswordEdit->Text="";
				} */

		}



	}
}

}

void __fastcall TMyLoginForm::FormClose(TObject *Sender, TCloseAction &Action)
{
    UsernameEdit->Text="";
	PasswordEdit->Text="";
	msgLabel->Text="";
}

//---------------------------------------------------------------------------

