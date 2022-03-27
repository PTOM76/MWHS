#pragma comment(linker,"/manifestdependency:\"type='win32' \
  name='Microsoft.Windows.Common-Controls' \
  version='6.0.0.0' \
  processorArchitecture='x86' \
  publicKeyToken='6595b64144ccf1df' \
  language='*'\"")

#include "MyForm.h"

using namespace WebHookSpammer;

int WinMain() {
	MyForm^ form = gcnew MyForm();
	form->ShowDialog();
	return 0;
}