//---------------------------------------------------------------------------

#ifndef RegisterFormH
#define RegisterFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TMyRegisterForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *nameEdit;
	TEdit *ageEdit;
	TEdit *usernameEdit;
	TEdit *passwordEdit;
	TButton *SaveButton;
	void __fastcall SaveButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TMyRegisterForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyRegisterForm *MyRegisterForm;
//---------------------------------------------------------------------------
#endif
