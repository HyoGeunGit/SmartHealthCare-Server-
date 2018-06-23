//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#pragma resource "winxp.res"
TForm1 *Form1;
int count=0,IDX/*IDX는 메세지를 보낸 클라이언트의 아이피 주소의 리스트박스  순번*/;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    if(Edit2->Text<0&&Edit3->Text<0&&Edit4->Text<0&&Edit5->Text<0&&Edit6->Text<0&&Edit7->Text<0&&Edit8->Text<0&&Edit9->Text<0)
    {
        ShowMessage("다시 입력하세요");
    }
    ADOQuery1->Close();
    ADOQuery1->SQL->Clear();
    ADOQuery1->SQL->Add("Insert into Table1");
    ADOQuery1->SQL->Add("(병명,좋은음식,나쁜음식,물질,증상,예방법,식이요법,운동,지속기간,연령)");
    ADOQuery1->SQL->Add("VALUES");
    ADOQuery1->SQL->Add("('"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"','"+Edit6->Text+"','"+Edit7->Text+"','"+Edit8->Text+"','"+Edit9->Text+"','"+Edit10->Text+"','"+Edit11->Text+"')");
    ADOQuery1->ExecSQL();
    ADOQuery1->SQL->Clear();
    ADOQuery1->SQL->Add("select * from Table1");
    ADOQuery1->Open();


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        ShowMessage(DBGrid1->Fields[0]->Text);
        if(DBGrid1->Fields[0]->Text=="")
        {
            ShowMessage("더 이상 없습니다.");
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
    ADOQuery1->Next();
}
//-------------------------------------------+-----------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
    Memo1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit10KeyPress(TObject *Sender, char &Key)
{
    if(!(isdigit(Key))) Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit11KeyPress(TObject *Sender, char &Key)
{
    if(!(isdigit(Key))) Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
    ADOQuery1->Close();
    ADOQuery1->SQL->Clear();
    ADOQuery1->SQL->Add("DELETE * FROM Table1 WHERE 병명= '" + Edit2->Text+"'");
    ADOQuery1->ExecSQL();
    ADOQuery1->SQL->Clear();
    ADOQuery1->SQL->Add("SELECT * FROM Table1");
    ADOQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
    for (int i=0;i<DBGrid1->Fields[2]->DataSet->RecordCount;i++)
    {
        while (DBGrid1->Fields[2]->Text.Pos(Edit1->Text))
        {
            Timer1->Enabled =false;
            Memo1->Lines->Add(DBGrid1->Fields[2]->Text);
            break;
        }
        DBGrid1->Fields[2]->DataSet->Next();
    }
    DBGrid1->Fields[2]->DataSet->First();

    for (int i=0;i<DBGrid2->Fields[2]->DataSet->RecordCount;i++)
    {
        while (DBGrid2->Fields[2]->Text.Pos(Edit1->Text))
        {
            Timer1->Enabled =false;
            Memo1->Lines->Add(DBGrid2->Fields[2]->Text);
            break;
        }
        DBGrid2->Fields[2]->DataSet->Next();
    }
    DBGrid2->Fields[2]->DataSet->First();
    Timer1->Enabled = true;
    if(ProgressBar2->Position == 100)
    {
        ProgressBar2->Position -=100;
    }
    else
    {
        ProgressBar2->Position +=100;
        ShowMessage("검색완료");
    }





}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    if (ProgressBar2->Position == 100)
    {
        Timer1->Enabled =false;
        Timer1->Interval = 0;
    }
    else
    {

        ProgressBar2->Position +=10;
    }
}
//---------------------------------------------------------------------------






void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
    if(CheckBox1->Checked == true)
    {
        Edit2->Enabled = true;
    }
    else
    {
        Edit2->Enabled = false;
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
    if(CheckBox2->Checked == true)
    {
        Edit3->Enabled = true;
    }
    else
    {
        Edit3->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
    if(CheckBox3->Checked == true)
    {
        Edit4->Enabled = true;
    }
    else
    {
        Edit4->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox4Click(TObject *Sender)
{
    if(CheckBox4->Checked == true)
    {
        Edit5->Enabled = true;
    }
    else
    {
        Edit5->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox7Click(TObject *Sender)
{
    if(CheckBox7->Checked == true)
    {
        Edit6->Enabled = true;
    }
    else
    {
        Edit6->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox6Click(TObject *Sender)
{
    if(CheckBox6->Checked == true)
    {
        Edit7->Enabled = true;
    }
    else
    {
        Edit7->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox5Click(TObject *Sender)
{
    if(CheckBox5->Checked == true)
    {
        Edit8->Enabled = true;
    }
    else
    {
        Edit8->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox10Click(TObject *Sender)
{
    if(CheckBox10->Checked == true)
    {
        Edit9->Enabled = true;
    }
    else
    {
        Edit9->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox9Click(TObject *Sender)
{
    if(CheckBox9->Checked == true)
    {
        Edit10->Enabled = true;
    }
    else
    {
        Edit10->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox8Click(TObject *Sender)
{
    if(CheckBox8->Checked == true)
    {
        Edit11->Enabled = true;
    }
    else
    {
        Edit11->Enabled = false;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
    ShowMessage("클라이언트와의 접속을 성공하였습니다.");
    ListBox1->Items->Add(Socket->RemoteAddress);
    
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ServerSocket1ClientError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
     if(ErrorCode == 10055 || ErrorCode == 10051 || ErrorCode == 10056 || ErrorCode == 10061)
    {
        ErrorCode = 0 ;
        ShowMessage("통신 설정을 확인해주세요");
    }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
        //////////////메세지 받기
    AnsiString buff = Socket->ReceiveText();
    IDX=ListBox1->Items->IndexOf(Socket->RemoteAddress);
    //////////////////메세지의 역할 확인
     int count=buff.Pos("#");
     if(count>0)
     {
        String txt,dta; //tp=type, txt=text, dta=data
        String finish;
        String tp[100];
        tp[0]="병명";
        tp[1]="좋은 음식";
        tp[2]="나쁜 음식";
        tp[3]="물질";
        tp[4]="증상";
        tp[5]="예방법";
        tp[6]="식이요법";
        tp[7]="운동";
        tp[8]="지속기간";
        tp[9]="연령";
        tp[11]="역할";
        for(int cv=0;cv<=11;cv++)
        {
                count=buff.Pos("#");
                finish=buff.SubString(0,count-1);
                buff=buff.Delete(1,count);
                tp[cv]=finish;
        }
        int job= StrToInt(tp[11]);
        //////////////////////////////////////////////////////////////////////
        //서버 DB 에 정보 추가
        if(tp[10]=="tlqkf")
        {
        switch(job)
        {
        case 1:
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("Insert into Table1");
                ADOQuery1->SQL->Add("(병명,좋은음식,나쁜음식,물질,증상,예방법,식이요법,운동,지속기간,연령)");
                ADOQuery1->SQL->Add("VALUES");
                ADOQuery1->SQL->Add("('"+tp[0]+"','"+tp[1]+"','"+tp[2]+"','"+tp[3]+"','"+tp[4]+"','"+tp[5]+"','"+tp[6]+"','"+tp[7]+"','"+tp[8]+"','"+tp[9]+"')");
                ADOQuery1->ExecSQL();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("select * from Table1");
                ADOQuery1->Open();
                break;
        case 2:
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("DELETE * FROM Table1 WHERE 병명= '" +tp[0]+"'");
                ADOQuery1->ExecSQL();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("SELECT * FROM Table1");
                ADOQuery1->Open();
                break;
        }
        }
        else
        {
                ServerSocket1->Socket->Connections[ListBox1->ItemIndex]->SendText("암호가 맞지 않습니다.");
        }

     }


    AnsiString a;
    int p;
    ADOQuery1->First();
    for(p=0;p<DBGrid1->Fields[0]->DataSet->RecordCount;p++)
    {
        a = ADOQuery1->Fields->FieldByName("병명")->AsString;
        if(buff == a)
        {
            ShowMessage("일치합니다.");
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("좋은음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("나쁜음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("물질")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("증상")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("예방법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("식이요법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("운동")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("지속기간")->AsString);
            break;
        }

        ADOQuery1->Next();
    }
    for(p=0;p<DBGrid1->Fields[1]->DataSet->RecordCount;p++)
    {
        a = ADOQuery1->Fields->FieldByName("좋은음식")->AsString;
        if(a.Pos(buff))
        {
            ShowMessage("일치합니다.");
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("병명")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("나쁜음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("물질")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("증상")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("예방법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("식이요법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("운동")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("지속기간")->AsString);
            break;
        }

        ADOQuery1->Next();

    }
    for(p=0;p<DBGrid1->Fields[2]->DataSet->RecordCount;p++)
    {
        a = ADOQuery1->Fields->FieldByName("나쁜음식")->AsString;
        if(a.Pos(buff))
        {
            ShowMessage("일치합니다.");
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("병명")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("좋은음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("물질")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("증상")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("예방법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("식이요법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("운동")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("지속기간")->AsString);
            break;
        }

        ADOQuery1->Next();


    }
    for(p=0;p<DBGrid1->Fields[3]->DataSet->RecordCount;p++)
    {
        a = ADOQuery1->Fields->FieldByName("물질")->AsString;
        if(a.Pos(buff))
        {
            ShowMessage("일치합니다.");
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("병명")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("좋은음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("나쁜음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("증상")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("예방법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("식이요법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("운동")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("지속기간")->AsString);
            break;
        }

        ADOQuery1->Next();


    }
    for(p=0;p<DBGrid1->Fields[4]->DataSet->RecordCount;p++)
    {
        a = ADOQuery1->Fields->FieldByName("증상")->AsString;
        if(a.Pos(buff))
        {
            ShowMessage("일치합니다.");
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("병명")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("좋은음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("나쁜음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("물질")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("예방법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("식이요법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("운동")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("지속기간")->AsString);
            break;
        }

        ADOQuery1->Next();


    }
        for(p=0;p<DBGrid1->Fields[5]->DataSet->RecordCount;p++)
    {
        a = ADOQuery1->Fields->FieldByName("예방법")->AsString;
        if(a.Pos(buff))
        {
            ShowMessage("일치합니다.");
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("병명")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("좋은음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("나쁜음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("물질")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("증상")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("식이요법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("운동")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("지속기간")->AsString);
            break;
        }

        ADOQuery1->Next();


    }
    for(p=0;p<DBGrid1->Fields[6]->DataSet->RecordCount;p++)
    {
        a = ADOQuery1->Fields->FieldByName("식이요법")->AsString;
        if(a.Pos(buff))
        {
            ShowMessage("일치합니다.");
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("병명")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("좋은음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("나쁜음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("물질")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("증상")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("예방법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("운동")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("지속기간")->AsString);
            break;
        }

        ADOQuery1->Next();


    }
    for(p=0;p<DBGrid1->Fields[7]->DataSet->RecordCount;p++)
    {
        a = ADOQuery1->Fields->FieldByName("운동")->AsString;
        if(a.Pos(buff))
        {
            ShowMessage("일치합니다.");
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("병명")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("좋은음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("나쁜음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("물질")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("증상")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("예방법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("식이요법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("지속기간")->AsString);
            break;
        }

        ADOQuery1->Next();


    }
    for(p=0;p<DBGrid1->Fields[8]->DataSet->RecordCount;p++)
    {
        a = ADOQuery1->Fields->FieldByName("지속기간")->AsString;
        if(buff == a)
        {
            ShowMessage("일치합니다.");
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("병명")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("좋은음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("나쁜음식")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("물질")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("증상")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("예방법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("식이요법")->AsString);
            Memo1->Lines->Add(ADOQuery1->Fields->FieldByName("운동")->AsString);
            break;
        }

        ADOQuery1->Next();

    }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button8Click(TObject *Sender)
{
    AnsiString a = "http://search.naver.com/search.naver?where=nexearch&query="+Edit13->Text+"&frm=t1";
    ShellExecute(NULL,"open",a.c_str(),NULL,NULL,SW_SHOWNORMAL);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit13Click(TObject *Sender)
{
    Edit13->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
        ServerSocket1->Socket->Connections[ListBox1->ItemIndex]->SendText(Memo1->Text);
        Memo1->Lines->Text="";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Memo1Change(TObject *Sender)
{
        ServerSocket1->Socket->Connections[IDX]->SendText(Memo1->Text);
        Memo1->Lines->Text="";
}
//---------------------------------------------------------------------------

