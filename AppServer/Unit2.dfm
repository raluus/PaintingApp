object Fexit: TFexit
  Left = 622
  Top = 368
  Width = 258
  Height = 196
  Align = alCustom
  Caption = 'EXIT'
  Color = clCream
  TransparentColorValue = clCream
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clCream
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object FePa3: TLabel
    Left = 24
    Top = 40
    Width = 187
    Height = 19
    Align = alCustom
    Caption = '   Do you want to exit PAINT?'
    Color = clInfoBk
    Font.Charset = ANSI_CHARSET
    Font.Color = clMenuText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object FePa1: TPanel
    Left = 16
    Top = 112
    Width = 73
    Height = 33
    TabOrder = 0
    object Okaybtn: TSpeedButton
      Left = 0
      Top = 0
      Width = 73
      Height = 33
      Caption = 'Yes'
      Flat = True
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = OkaybtnClick
    end
  end
  object FePa2: TPanel
    Left = 152
    Top = 112
    Width = 73
    Height = 33
    Color = clSkyBlue
    TabOrder = 1
    object GoBackBtn: TSpeedButton
      Left = 0
      Top = 0
      Width = 73
      Height = 33
      Caption = 'No'
      Flat = True
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Times New Roman'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = GoBackBtnClick
    end
  end
end
