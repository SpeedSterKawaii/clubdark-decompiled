// THIS DOES NOT HAVE THE KEY SYSTEM I think, so enjoy.
// This is the main init, also decompiled by speedsterkawaii B)

  IdkWhatThisIs(0);
  WrapGlobal("getrawmetatable");
  IdkWhatThisIs(0);
  WrapGlobal("getgenv");
  IdkWhatThisIs(0);
  WrapGlobal("getrenv");
  v24 = dword_100359F8;
  if ( *(_DWORD *)(*(_DWORD *)(dword_100359F8 + 16) + 68) >= *(_DWORD *)(*(_DWORD *)(dword_100359F8 + 16) + 64) )
    sub_1000DFC0(dword_100359F8);
  v26 = *(_DWORD *)(v24 + 20);
  if ( v26 == *(_DWORD *)(v24 + 40) )
    v27 = *(_DWORD *)(v24 + 72);
  else
LABEL_43:
    v27 = *(_DWORD *)(**(_DWORD **)(v26 + 4) + 12);
  v28 = sub_10012420(0, 24);
  v29 = *(_DWORD *)(v24 + 16);
  v30 = v28;
  *(_DWORD *)v28 = *(_DWORD *)(v29 + 28);
  v31 = *(_BYTE *)(v29 + 20);
  *(_DWORD *)(v29 + 28) = v28;
  *(_BYTE *)(v28 + 5) = v31 & 3;
  *(_BYTE *)(v28 + 4) = 6;
  *(_WORD *)(v28 + 6) = 1;
  *(_DWORD *)(v28 + 12) = v27;
  *(_DWORD *)(v28 + 16) = sub_10027E10;
  v32 = *(_DWORD *)(v24 + 8);
  *(_DWORD *)v32 = v30;
  *(_DWORD *)(v32 + 8) = 6;
  *(_DWORD *)(v24 + 8) += 16;
  WrapGlobal("setreadonly");
  IdkWhatThisIs(0);
  WrapGlobal("setclipboard");
  IdkWhatThisIs(0);
  WrapGlobal("CreateConsole");
  IdkWhatThisIs(0);
  WrapGlobal("MessageBoxA");
  IdkWhatThisIs(0);
  WrapGlobal("WriteLog");
  IdkWhatThisIs(0);
  WrapGlobal("writefile");
  IdkWhatThisIs(0);
  WrapGlobal("readfile");
  IdkWhatThisIs(0);
  WrapGlobal("fireclickdetector");
  pInputs.type = 0;
  IdkWhatThisIs(0);
  WrapGlobal("leftpress");
  IdkWhatThisIs(0);
  WrapGlobal("leftrelease");
  IdkWhatThisIs(0);
  WrapGlobal("rightpress");
  IdkWhatThisIs(0);
  WrapGlobal("rightRelease");
  IdkWhatThisIs(0);
  WrapGlobal("leftclick");
  IdkWhatThisIs(0);
  WrapGlobal("rightclick");
  IdkWhatThisIs(0);
  WrapGlobal("mousescroll");
  IdkWhatThisIs(0);
  WrapGlobal("mousemoverel");
  stru_10035A08.type = 1;
  IdkWhatThisIs(0);
  WrapGlobal("keypress");
  IdkWhatThisIs(0);
  WrapGlobal("keyrelease");
  IdkWhatThisIs(0);
  WrapGlobal("keytap");
  var = Execute(
          130,
          "game.StarterGui:SetCore('SendNotification', {Duration = 10; Title='Club Dark'; Text='Injected'; Icon = 'rbxass"
          "etid://2935928760'})"); // gay watermark
  if ( !var )
    var = bru(-1, 0);
  return var;
}
