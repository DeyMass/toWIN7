#include "ctest.h"
#include "/home/me/TRPO/src/func.h"
#include <string.h>

CTEST (sname, test1){
  char a[]="hello world, how you doing?";
  const char b[]="****|*|*-**|*-**|---| |*--|---|*-*|*-**|-**|*-*-*-| |****|---|*--| |-*--|---|**-| |-**|---|**|-*|--*|**--**|";
  morze(a);
  
 assert_str(a,b,"a",1);
    
}


CTEST(sname, test2){
  const char a[]="Hello world, how you doing?";
  char get[]="****|*|*-**|*-**|---| |*--|---|*-*|*-**|-**|*-*-*-| |****|---|*--| |-*--|---|**-| |-**|---|**|-*|--*|---*|**--**|";

  demorze(get);
  const char exp[]="hello world, how you doing?";
  assert_str(exp,get,"testilka",1);
    

}
