library FastMM4CPlusPlus;

{.$DEFINE MULTITHREAD}

{$R *.res}

function FastMM_GetMem(Size: Integer): Pointer; cdecl;
begin
  GetMem(Result, Size);
end;

function FastMM_ReGetMem(P: Pointer; Size: Integer): Pointer; cdecl;
begin
  Result := P;
  ReallocMem(Result, Size);
end;

procedure FastMM_FreeMem(P: Pointer); cdecl;
begin
  FreeMem(P);
end;

exports
  FastMM_GetMem,
  FastMM_ReGetMem,
  FastMM_FreeMem;

begin
  {$IFDEF DEBUG}
  ReportMemoryLeaksOnShutdown := True;
  {$ENDIF}

  {$IFDEF MULTITHREAD}
  IsMultiThread := True;
  {$ENDIF}
end.
