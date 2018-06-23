//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ScktComp.hpp>
#include <NMUDP.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TEdit *Edit1;
    TButton *Button1;
    TADOConnection *ADOConnection1;
    TADOQuery *ADOQuery1;
    TDataSource *DataSource1;
    TEdit *Edit2;
    TButton *Button2;
    TEdit *Edit3;
    TEdit *Edit4;
    TEdit *Edit5;
    TEdit *Edit6;
    TEdit *Edit7;
    TEdit *Edit8;
    TEdit *Edit9;
    TEdit *Edit10;
    TEdit *Edit11;
    TButton *Button3;
    TStatusBar *StatusBar1;
    TButton *Button5;
    TStaticText *StaticText1;
    TStaticText *StaticText2;
    TStaticText *StaticText3;
    TStaticText *StaticText4;
    TStaticText *StaticText5;
    TStaticText *StaticText6;
    TStaticText *StaticText7;
    TStaticText *StaticText8;
    TStaticText *StaticText9;
    TStaticText *StaticText10;
    TGroupBox *GroupBox1;
    TGroupBox *GroupBox2;
    TGroupBox *GroupBox3;
    TGroupBox *GroupBox4;
    TButton *Button6;
    TProgressBar *ProgressBar2;
    TTimer *Timer1;
    TDBGrid *DBGrid1;
    TMemo *Memo1;
    TButton *Button4;
    TGroupBox *GroupBox5;
    TGroupBox *GroupBox6;
    TGroupBox *GroupBox7;
    TCheckBox *CheckBox1;
    TCheckBox *CheckBox2;
    TCheckBox *CheckBox3;
    TCheckBox *CheckBox4;
    TCheckBox *CheckBox5;
    TCheckBox *CheckBox6;
    TCheckBox *CheckBox7;
    TCheckBox *CheckBox8;
    TCheckBox *CheckBox9;
    TCheckBox *CheckBox10;
    TDBGrid *DBGrid2;
    TGroupBox *GroupBox8;
    TADOConnection *ADOConnection2;
    TADOQuery *ADOQuery2;
    TDataSource *DataSource2;
    TServerSocket *ServerSocket1;
    TMemo *Memo2;
    TImage *Image1;
    TEdit *Edit13;
    TButton *Button8;
    TGroupBox *GroupBox10;
    TNMUDP *NMUDP1;
    TButton *Button7;
    TGroupBox *GroupBox9;
    TListBox *ListBox1;
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall Button4Click(TObject *Sender);
    void __fastcall Edit10KeyPress(TObject *Sender, char &Key);
    void __fastcall Edit11KeyPress(TObject *Sender, char &Key);
    void __fastcall Button5Click(TObject *Sender);
    void __fastcall Button6Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall CheckBox1Click(TObject *Sender);
    void __fastcall CheckBox2Click(TObject *Sender);
    void __fastcall CheckBox3Click(TObject *Sender);
    void __fastcall CheckBox4Click(TObject *Sender);
    void __fastcall CheckBox7Click(TObject *Sender);
    void __fastcall CheckBox6Click(TObject *Sender);
    void __fastcall CheckBox5Click(TObject *Sender);
    void __fastcall CheckBox10Click(TObject *Sender);
    void __fastcall CheckBox9Click(TObject *Sender);
    void __fastcall CheckBox8Click(TObject *Sender);
    void __fastcall ServerSocket1ClientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
    void __fastcall ServerSocket1ClientError(TObject *Sender,
          TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
    void __fastcall ServerSocket1ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
    void __fastcall Button8Click(TObject *Sender);
    void __fastcall Edit13Click(TObject *Sender);
    void __fastcall Button7Click(TObject *Sender);
        void __fastcall Memo1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
