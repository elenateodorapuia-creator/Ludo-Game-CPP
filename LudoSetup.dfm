object fSetup: TfSetup
  Left = 0
  Top = 0
  Caption = 'FereastraSetupLudo'
  ClientHeight = 400
  ClientWidth = 500
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  TextHeight = 15
  object pnlTipJoc: TPanel
    Left = 96
    Top = 88
    Width = 297
    Height = 193
    TabOrder = 0
    object btnLocal: TButton
      Left = 40
      Top = 85
      Width = 75
      Height = 25
      Caption = 'Joc Local'
      TabOrder = 0
      OnClick = btnLocalClick
    end
    object btnRetea: TButton
      Left = 176
      Top = 85
      Width = 75
      Height = 25
      Caption = 'Joc Retea'
      TabOrder = 1
      OnClick = btnReteaClick
    end
  end
  object pnlNumeJucatori: TPanel
    Left = 96
    Top = 88
    Width = 297
    Height = 193
    TabOrder = 1
    Visible = False
    object lblAlbastru: TLabel
      Left = 16
      Top = 32
      Width = 121
      Height = 15
      Caption = 'Nume jucator albastru:'
    end
    object lblVerde: TLabel
      Left = 16
      Top = 72
      Width = 108
      Height = 15
      Caption = 'Nume jucator verde:'
    end
    object lblRosu: TLabel
      Left = 16
      Top = 112
      Width = 102
      Height = 15
      Caption = 'Nume jucator rosu:'
    end
    object lblGalben: TLabel
      Left = 16
      Top = 152
      Width = 115
      Height = 15
      Caption = 'Nume jucator galben:'
    end
    object editAlbastru: TEdit
      Left = 152
      Top = 29
      Width = 121
      Height = 23
      TabOrder = 0
    end
    object editVerde: TEdit
      Left = 152
      Top = 69
      Width = 121
      Height = 23
      TabOrder = 1
    end
    object editRosu: TEdit
      Left = 152
      Top = 112
      Width = 121
      Height = 23
      TabOrder = 2
    end
    object editGalben: TEdit
      Left = 152
      Top = 152
      Width = 121
      Height = 23
      TabOrder = 3
    end
  end
  object btnStartJoc: TButton
    Left = 200
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Start Joc'
    TabOrder = 2
    Visible = False
    OnClick = btnStartJocClick
  end
  object pnlNrJucatori: TPanel
    Left = 96
    Top = 88
    Width = 297
    Height = 193
    TabOrder = 3
    Visible = False
    object btn2jucatori: TButton
      Left = 48
      Top = 88
      Width = 75
      Height = 25
      Caption = '2 jucatori'
      TabOrder = 0
      OnClick = btn2jucatoriClick
    end
    object btn4jucatori: TButton
      Left = 176
      Top = 88
      Width = 75
      Height = 25
      Caption = '4 jucatori'
      TabOrder = 1
      OnClick = btn4jucatoriClick
    end
  end
end
