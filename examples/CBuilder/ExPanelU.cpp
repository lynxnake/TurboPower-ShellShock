// ***** BEGIN LICENSE BLOCK *****
// * Version: MPL 1.1
// *
// * The contents of this file are subject to the Mozilla Public License Version
// * 1.1 (the "License"); you may not use this file except in compliance with
// * the License. You may obtain a copy of the License at
// * http://www.mozilla.org/MPL/
// *
// * Software distributed under the License is distributed on an "AS IS" basis,
// * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
// * for the specific language governing rights and limitations under the
// * License.
// *
// * The Original Code is TurboPower ShellShock
// *
// * The Initial Developer of the Original Code is
// * TurboPower Software
// *
// * Portions created by the Initial Developer are Copyright (C) 1996-2002
// * the Initial Developer. All Rights Reserved.
// *
// * Contributor(s):
// *
// * ***** END LICENSE BLOCK *****
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ExPanelU.h"
#include "ExPanel2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  Form2->StDialogPanel1->InitialDir = Edit1->Text;
  Form2->Caption = "Open";
  Form2->StDialogPanel1->OpenButtonCaption = "Open";
  if (Form2->ShowModal() == mrOk)
    Memo1->Lines = Form2->StDialogPanel1->Files;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
  Form2->StDialogPanel1->InitialDir = Edit1->Text;
  Form2->Caption = "Save";
  Form2->StDialogPanel1->OpenButtonCaption = "Save";
  if (Form2->ShowModal() == mrOk) {
    ShowMessage(Form2->StDialogPanel1->FileName + " saved.");
    Memo1->Lines = Form2->StDialogPanel1->Files;
  }
}
//---------------------------------------------------------------------------