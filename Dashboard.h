//---------------------------------------------------------------------------

#ifndef DashboardH
#define DashboardH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Calendar.hpp>
#include <FMX.DateTimeCtrls.hpp>
#include <FMX.ExtCtrls.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Controls3D.hpp>
#include <FMX.Objects3D.hpp>
#include <System.Math.Vectors.hpp>
//---------------------------------------------------------------------------
class TMyEndForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *WelcomeMsg;
	TCalendar *Calendar1;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TCheckBox *CheckBox4;
	TCheckBox *CheckBox5;
	TLabel *msg;
	TButton *SubmitButton;
	void __fastcall SubmitButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyEndForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyEndForm *MyEndForm;
//---------------------------------------------------------------------------
#endif
