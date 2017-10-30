#pragma once
#include "stdafx.h"

#ifdef __cplusplus
extern "C" {
#endif

  BOOL n2e_ExplorerCxtMenu(LPCWSTR path, const HWND hwndParent);
  int n2e_isValidRegex(LPCSTR str);
  int n2e_GetUTF8CharLength(const unsigned char ch);

#ifdef __cplusplus
}//end extern "C"
#endif
