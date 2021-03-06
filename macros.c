/*
 * Do not edit - this file auto-generated by macros.pl from:
 *   ./standard.mac
 *   version.mac
 *   ./macros/altreg.mac
 *   ./macros/smartalign.mac
 *   ./output/outaout.mac
 *   ./output/outas86.mac
 *   ./output/outbin.mac
 *   ./output/outcoff.mac
 *   ./output/outelf.mac
 *   ./output/outmacho.mac
 *   ./output/outobj.mac
 *   ./output/outrdf.mac
 *   ./output/outrdf2.mac
 */

#include "tables.h"
#include "nasmlib.h"
#include "hashtbl.h"
#include "output/outform.h"

#if 1
const unsigned char nasm_stdmac[] = {
    /* From ./standard.mac */
        /*    0 */ 209,'I','D','E','A','L',0,
        /*    7 */ 209,'J','U','M','P','S',0,
        /*   14 */ 209,'P','3','8','6',0,
        /*   20 */ 209,'P','4','8','6',0,
        /*   26 */ 209,'P','5','8','6',0,
        /*   32 */ 209,'E','N','D',0,
    /* End of TASM macros */
        /*   37 */ 195,'_','_','F','I','L','E','_','_',0,
        /*   47 */ 195,'_','_','L','I','N','E','_','_',0,
        /*   57 */ 195,'_','_','B','I','T','S','_','_',0,
        /*   67 */ 195,'_','_','S','E','C','T','_','_',0,
        /*   77 */ 212,'s','e','c','t','i','o','n',' ','1','+','.','n','o','l','i','s','t',0,
        /*   96 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','%','1',']',0,
        /*  119 */ '_','_','S','E','C','T','_','_',0,
        /*  128 */ 202,0,
        /*  130 */ 212,'s','e','g','m','e','n','t',' ','1','+','.','n','o','l','i','s','t',0,
        /*  149 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','g','m','e','n','t',' ','%','1',']',0,
        /*  172 */ '_','_','S','E','C','T','_','_',0,
        /*  181 */ 202,0,
        /*  183 */ 212,'a','b','s','o','l','u','t','e',' ','1','+','.','n','o','l','i','s','t',0,
        /*  203 */ 195,'_','_','S','E','C','T','_','_',' ','[','a','b','s','o','l','u','t','e',' ','%','1',']',0,
        /*  227 */ '_','_','S','E','C','T','_','_',0,
        /*  236 */ 202,0,
        /*  238 */ 212,'s','t','r','u','c',' ','1','-','2','.','n','o','l','i','s','t',' ','0',0,
        /*  258 */ 221,0,
        /*  260 */ 195,'%','$','s','t','r','u','c','n','a','m','e',' ','%','1',0,
        /*  276 */ '[','a','b','s','o','l','u','t','e',' ','%','2',']',0,
        /*  290 */ '%','$','s','t','r','u','c','n','a','m','e',':',0,
        /*  303 */ 202,0,
        /*  305 */ 212,'e','n','d','s','t','r','u','c',' ','0','.','n','o','l','i','s','t',0,
        /*  324 */ '%','{','$','s','t','r','u','c','n','a','m','e','}','_','s','i','z','e',' ','e','q','u',' ','(','$','-','%','$','s','t','r','u','c','n','a','m','e',')',0,
        /*  363 */ 220,0,
        /*  365 */ '_','_','S','E','C','T','_','_',0,
        /*  374 */ 202,0,
        /*  376 */ 212,'i','s','t','r','u','c',' ','1','.','n','o','l','i','s','t',0,
        /*  393 */ 221,0,
        /*  395 */ 195,'%','$','s','t','r','u','c','n','a','m','e',' ','%','1',0,
        /*  411 */ '%','$','s','t','r','u','c','s','t','a','r','t',':',0,
        /*  425 */ 202,0,
        /*  427 */ 212,'a','t',' ','1','-','2','+','.','n','o','l','i','s','t',0,
        /*  443 */ 't','i','m','e','s',' ','(','%','1','-','%','$','s','t','r','u','c','n','a','m','e',')','-','(','$','-','%','$','s','t','r','u','c','s','t','a','r','t',')',' ','d','b',' ','0',0,
        /*  488 */ '%','2',0,
        /*  491 */ 202,0,
        /*  493 */ 212,'i','e','n','d',' ','0','.','n','o','l','i','s','t',0,
        /*  508 */ 't','i','m','e','s',' ','%','{','$','s','t','r','u','c','n','a','m','e','}','_','s','i','z','e','-','(','$','-','%','$','s','t','r','u','c','s','t','a','r','t',')',' ','d','b',' ','0',0,
        /*  555 */ 220,0,
        /*  557 */ 202,0,
        /*  559 */ 212,'a','l','i','g','n',' ','1','-','2','+','.','n','o','l','i','s','t',' ','n','o','p',0,
        /*  582 */ 't','i','m','e','s',' ','(','(','(','%','1',')',' ','-',' ','(','(','$','-','$','$',')',' ','%',' ','(','%','1',')',')',')',' ','%',' ','(','%','1',')',')',' ','%','2',0,
        /*  625 */ 202,0,
        /*  627 */ 212,'a','l','i','g','n','b',' ','1','-','2','+','.','n','o','l','i','s','t',0,
        /*  647 */ 166,'%','2',0,
        /*  651 */ 'r','e','s','b',' ','(','(','(','%','1',')',' ','-',' ','(','(','$','-','$','$',')',' ','%',' ','(','%','1',')',')',')',' ','%',' ','(','%','1',')',')',0,
        /*  690 */ 199,0,
        /*  692 */ 't','i','m','e','s',' ','(','(','(','%','1',')',' ','-',' ','(','(','$','-','$','$',')',' ','%',' ','(','%','1',')',')',')',' ','%',' ','(','%','1',')',')',' ','%','2',0,
        /*  735 */ 200,0,
        /*  737 */ 202,0,
        /*  739 */ 212,'e','x','t','e','r','n',' ','1','-','*','.','n','o','l','i','s','t',0,
        /*  758 */ 222,'%','0',0,
        /*  762 */ '[','e','x','t','e','r','n',' ','%','1',']',0,
        /*  774 */ 225,'1',0,
        /*  777 */ 203,0,
        /*  779 */ 202,0,
        /*  781 */ 212,'b','i','t','s',' ','1','+','.','n','o','l','i','s','t',0,
        /*  797 */ '[','b','i','t','s',' ','%','1',']',0,
        /*  807 */ 202,0,
        /*  809 */ 212,'u','s','e','1','6',' ','0','.','n','o','l','i','s','t',0,
        /*  825 */ '[','b','i','t','s',' ','1','6',']',0,
        /*  835 */ 202,0,
        /*  837 */ 212,'u','s','e','3','2',' ','0','.','n','o','l','i','s','t',0,
        /*  853 */ '[','b','i','t','s',' ','3','2',']',0,
        /*  863 */ 202,0,
        /*  865 */ 212,'u','s','e','6','4',' ','0','.','n','o','l','i','s','t',0,
        /*  881 */ '[','b','i','t','s',' ','6','4',']',0,
        /*  891 */ 202,0,
        /*  893 */ 212,'g','l','o','b','a','l',' ','1','-','*','.','n','o','l','i','s','t',0,
        /*  912 */ 222,'%','0',0,
        /*  916 */ '[','g','l','o','b','a','l',' ','%','1',']',0,
        /*  928 */ 225,'1',0,
        /*  931 */ 203,0,
        /*  933 */ 202,0,
        /*  935 */ 212,'c','o','m','m','o','n',' ','1','-','*','.','n','o','l','i','s','t',0,
        /*  954 */ 222,'%','0',0,
        /*  958 */ '[','c','o','m','m','o','n',' ','%','1',']',0,
        /*  970 */ 225,'1',0,
        /*  973 */ 203,0,
        /*  975 */ 202,0,
        /*  977 */ 212,'c','p','u',' ','1','+','.','n','o','l','i','s','t',0,
        /*  992 */ '[','c','p','u',' ','%','1',']',0,
        /* 1001 */ 202,0,
        /* 1003 */ 195,'_','_','F','L','O','A','T','_','D','A','Z','_','_',' ','n','o','d','a','z',0,
        /* 1024 */ 195,'_','_','F','L','O','A','T','_','R','O','U','N','D','_','_',' ','n','e','a','r',0,
        /* 1046 */ 195,'_','_','F','L','O','A','T','_','_',' ','_','_','F','L','O','A','T','_','D','A','Z','_','_',',','_','_','F','L','O','A','T','_','R','O','U','N','D','_','_',0,
        /* 1087 */ 212,'f','l','o','a','t',' ','1','-','*','.','n','o','l','i','s','t',0,
        /* 1105 */ 222,'%','0',0,
        /* 1109 */ '[','f','l','o','a','t',' ','%','1',']',0,
        /* 1120 */ 172,'%','1',',','d','a','z',0,
        /* 1128 */ 195,'_','_','F','L','O','A','T','_','D','A','Z','_','_',' ','d','a','z',0,
        /* 1147 */ 140,'%','1',',','n','o','d','a','z',0,
        /* 1157 */ 195,'_','_','F','L','O','A','T','_','D','A','Z','_','_',' ','n','o','d','a','z',0,
        /* 1178 */ 140,'%','1',',','n','e','a','r',0,
        /* 1187 */ 195,'_','_','F','L','O','A','T','_','R','O','U','N','D','_','_',' ','n','e','a','r',0,
        /* 1209 */ 140,'%','1',',','u','p',0,
        /* 1216 */ 195,'_','_','F','L','O','A','T','_','R','O','U','N','D','_','_',' ','u','p',0,
        /* 1236 */ 140,'%','1',',','d','o','w','n',0,
        /* 1245 */ 195,'_','_','F','L','O','A','T','_','R','O','U','N','D','_','_',' ','d','o','w','n',0,
        /* 1267 */ 140,'%','1',',','z','e','r','o',0,
        /* 1276 */ 195,'_','_','F','L','O','A','T','_','R','O','U','N','D','_','_',' ','z','e','r','o',0,
        /* 1298 */ 140,'%','1',',','d','e','f','a','u','l','t',0,
        /* 1310 */ 195,'_','_','F','L','O','A','T','_','D','A','Z','_','_',' ','n','o','d','a','z',0,
        /* 1331 */ 195,'_','_','F','L','O','A','T','_','R','O','U','N','D','_','_',' ','n','e','a','r',0,
        /* 1353 */ 200,0,
        /* 1355 */ 225,'1',0,
        /* 1358 */ 203,0,
        /* 1360 */ 202,0,
        /* 1362 */ 212,'d','e','f','a','u','l','t',' ','1','+','.','n','o','l','i','s','t',0,
        /* 1381 */ '[','d','e','f','a','u','l','t',' ','%','1',']',0,
        /* 1394 */ 202,0,
        /* 1396 */ 212,'i','n','c','b','i','n',' ','1','-','2','+','.','n','o','l','i','s','t',' ','0',0,
        /* 1418 */ 221,0,
        /* 1420 */ 219,'%','$','d','e','p',' ','%','1',0,
        /* 1430 */ 198,'%','$','d','e','p',0,
        /* 1437 */ '%','?',' ','%','$','d','e','p',',','%','2',0,
        /* 1449 */ 220,0,
        /* 1451 */ 202,0,

    /* From version.mac */
        /* 1453 */ 195,'_','_','N','A','S','M','_','M','A','J','O','R','_','_',' ','2',0,
        /* 1471 */ 195,'_','_','N','A','S','M','_','M','I','N','O','R','_','_',' ','7',0,
        /* 1489 */ 195,'_','_','N','A','S','M','_','S','U','B','M','I','N','O','R','_','_',' ','9','9',0,
        /* 1511 */ 195,'_','_','N','A','S','M','_','P','A','T','C','H','L','E','V','E','L','_','_',' ','9','7',0,
        /* 1535 */ 195,'_','_','N','A','S','M','_','V','E','R','S','I','O','N','_','I','D','_','_',' ','0','0','2','0','7','6','3','6','1','h',0,
        /* 1567 */ 195,'_','_','N','A','S','M','_','V','E','R','_','_',' ', 34,'2','.','0','8','r','c','7', 34,0,
        /* 1591 */ 0
};
#endif

#if 1
static const unsigned char nasm_stdmac_altreg[] = {
    /* From ./macros/altreg.mac */
        /*    0 */ 195,'_','_','U','S','E','_','A','L','T','R','E','G','_','_',0,
        /*   16 */ 209,'r','8','l',' ',' ','r','8','b',0,
        /*   26 */ 209,'r','9','l',' ',' ','r','9','b',0,
        /*   36 */ 209,'r','1','0','l',' ','r','1','0','b',0,
        /*   47 */ 209,'r','1','1','l',' ','r','1','1','b',0,
        /*   58 */ 209,'r','1','2','l',' ','r','1','2','b',0,
        /*   69 */ 209,'r','1','3','l',' ','r','1','3','b',0,
        /*   80 */ 209,'r','1','4','l',' ','r','1','4','b',0,
        /*   91 */ 209,'r','1','5','l',' ','r','1','5','b',0,
        /*  102 */ 209,'r','0',' ',' ','r','a','x',0,
        /*  111 */ 209,'r','1',' ',' ','r','c','x',0,
        /*  120 */ 209,'r','2',' ',' ','r','d','x',0,
        /*  129 */ 209,'r','3',' ',' ','r','b','x',0,
        /*  138 */ 209,'r','4',' ',' ','r','s','p',0,
        /*  147 */ 209,'r','5',' ',' ','r','b','p',0,
        /*  156 */ 209,'r','6',' ',' ','r','s','i',0,
        /*  165 */ 209,'r','7',' ',' ','r','d','i',0,
        /*  174 */ 209,'r','0','d',' ','e','a','x',0,
        /*  183 */ 209,'r','1','d',' ','e','c','x',0,
        /*  192 */ 209,'r','2','d',' ','e','d','x',0,
        /*  201 */ 209,'r','3','d',' ','e','b','x',0,
        /*  210 */ 209,'r','4','d',' ','e','s','p',0,
        /*  219 */ 209,'r','5','d',' ','e','b','p',0,
        /*  228 */ 209,'r','6','d',' ','e','s','i',0,
        /*  237 */ 209,'r','7','d',' ','e','d','i',0,
        /*  246 */ 209,'r','0','w',' ','a','x',0,
        /*  254 */ 209,'r','1','w',' ','c','x',0,
        /*  262 */ 209,'r','2','w',' ','d','x',0,
        /*  270 */ 209,'r','3','w',' ','b','x',0,
        /*  278 */ 209,'r','4','w',' ','s','p',0,
        /*  286 */ 209,'r','5','w',' ','b','p',0,
        /*  294 */ 209,'r','6','w',' ','s','i',0,
        /*  302 */ 209,'r','7','w',' ','d','i',0,
        /*  310 */ 209,'r','0','b',' ','a','l',0,
        /*  318 */ 209,'r','1','b',' ','c','l',0,
        /*  326 */ 209,'r','2','b',' ','d','l',0,
        /*  334 */ 209,'r','3','b',' ','b','l',0,
        /*  342 */ 209,'r','4','b',' ','s','p','l',0,
        /*  351 */ 209,'r','5','b',' ','b','p','l',0,
        /*  360 */ 209,'r','6','b',' ','s','i','l',0,
        /*  369 */ 209,'r','7','b',' ','d','i','l',0,
        /*  378 */ 209,'r','0','l',' ','a','l',0,
        /*  386 */ 209,'r','1','l',' ','c','l',0,
        /*  394 */ 209,'r','2','l',' ','d','l',0,
        /*  402 */ 209,'r','3','l',' ','b','l',0,
        /*  410 */ 209,'r','4','l',' ','s','p','l',0,
        /*  419 */ 209,'r','5','l',' ','b','p','l',0,
        /*  428 */ 209,'r','6','l',' ','s','i','l',0,
        /*  437 */ 209,'r','7','l',' ','d','i','l',0,
        /*  446 */ 209,'r','0','h',' ','a','h',0,
        /*  454 */ 209,'r','1','h',' ','c','h',0,
        /*  462 */ 209,'r','2','h',' ','d','h',0,
        /*  470 */ 209,'r','3','h',' ','b','h',0,
        /*  478 */ 0
};
#endif

#if 1
static const unsigned char nasm_stdmac_smartalign[] = {
    /* From ./macros/smartalign.mac */
        /*    0 */ 195,'_','_','U','S','E','_','S','M','A','R','T','A','L','I','G','N','_','_',0,
        /*   20 */ 212,'a','l','i','g','n','m','o','d','e',' ','1','-','2','.','n','o','l','i','s','t',0,
        /*   42 */ 172,'%','1',',','n','o','p',0,
        /*   50 */ 195,'_','_','A','L','I','G','N','_','J','M','P','_','T','H','R','E','S','H','O','L','D','_','_',' ','1','6',0,
        /*   78 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /*  103 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','G','R','O','U','P','_','_',' ','1',0,
        /*  128 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /*  153 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','G','R','O','U','P','_','_',' ','1',0,
        /*  178 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /*  203 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','G','R','O','U','P','_','_',' ','1',0,
        /*  228 */ 140,'%','1',',','g','e','n','e','r','i','c',0,
        /*  240 */ 195,'_','_','A','L','I','G','N','_','J','M','P','_','T','H','R','E','S','H','O','L','D','_','_',' ','8',0,
        /*  267 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /*  292 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','2','B','_','_',' ','0','x','8','9',',','0','x','f','6',0,
        /*  322 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','3','B','_','_',' ','0','x','8','d',',','0','x','7','4',',','0','x','0','0',0,
        /*  357 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','4','B','_','_',' ','0','x','8','d',',','0','x','b','4',',','0','x','0','0',',','0','x','0','0',0,
        /*  397 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','5','B','_','_',' ','0','x','8','d',',','0','x','b','4',',','0','x','0','0',',','0','x','0','0',',','0','x','9','0',0,
        /*  442 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','6','B','_','_',' ','0','x','8','d',',','0','x','b','4',',','0','x','0','0',',','0','x','0','0',',','0','x','8','9',',','0','x','f','f',0,
        /*  492 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','7','B','_','_',' ','0','x','8','d',',','0','x','b','4',',','0','x','0','0',',','0','x','0','0',',','0','x','8','d',',','0','x','7','d',',','0','x','0','0',0,
        /*  547 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','8','B','_','_',' ','0','x','8','d',',','0','x','b','4',',','0','x','0','0',',','0','x','0','0',',','0','x','8','d',',','0','x','b','d',',','0','x','0','0',',','0','x','0','0',0,
        /*  607 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','G','R','O','U','P','_','_',' ','8',0,
        /*  632 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /*  657 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','2','B','_','_',' ','0','x','8','9',',','0','x','f','6',0,
        /*  687 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','3','B','_','_',' ','0','x','8','d',',','0','x','7','6',',','0','x','0','0',0,
        /*  722 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','4','B','_','_',' ','0','x','8','d',',','0','x','7','4',',','0','x','2','6',',','0','x','0','0',0,
        /*  762 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','5','B','_','_',' ','0','x','9','0',',','0','x','8','d',',','0','x','7','4',',','0','x','2','6',',','0','x','0','0',0,
        /*  807 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','6','B','_','_',' ','0','x','8','d',',','0','x','b','6',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',0,
        /*  857 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','7','B','_','_',' ','0','x','8','d',',','0','x','b','4',',','0','x','2','6',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',0,
        /*  912 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','G','R','O','U','P','_','_',' ','7',0,
        /*  937 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /*  962 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','2','B','_','_',' ','0','x','6','6',',','0','x','9','0',0,
        /*  992 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','3','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1027 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','4','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1067 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','G','R','O','U','P','_','_',' ','4',0,
        /* 1092 */ 140,'%','1',',','k','8',0,
        /* 1099 */ 195,'_','_','A','L','I','G','N','_','J','M','P','_','T','H','R','E','S','H','O','L','D','_','_',' ','1','6',0,
        /* 1127 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /* 1152 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','2','B','_','_',' ','0','x','6','6',',','0','x','9','0',0,
        /* 1182 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','3','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1217 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','4','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1257 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','G','R','O','U','P','_','_',' ','4',0,
        /* 1282 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /* 1307 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','2','B','_','_',' ','0','x','6','6',',','0','x','9','0',0,
        /* 1337 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','3','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1372 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','4','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1412 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','G','R','O','U','P','_','_',' ','4',0,
        /* 1437 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /* 1462 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','2','B','_','_',' ','0','x','6','6',',','0','x','9','0',0,
        /* 1492 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','3','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1527 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','4','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1567 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','G','R','O','U','P','_','_',' ','4',0,
        /* 1592 */ 140,'%','1',',','k','7',0,
        /* 1599 */ 195,'_','_','A','L','I','G','N','_','J','M','P','_','T','H','R','E','S','H','O','L','D','_','_',' ','1','6',0,
        /* 1627 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /* 1652 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','2','B','_','_',' ','0','x','6','6',',','0','x','9','0',0,
        /* 1682 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','3','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1717 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','4','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 1757 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','G','R','O','U','P','_','_',' ','4',0,
        /* 1782 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /* 1807 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','2','B','_','_',' ','0','x','8','b',',','0','x','c','0',0,
        /* 1837 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','3','B','_','_',' ','0','x','8','d',',','0','x','0','4',',','0','x','2','0',0,
        /* 1872 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','4','B','_','_',' ','0','x','8','d',',','0','x','4','4',',','0','x','2','0',',','0','x','0','0',0,
        /* 1912 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','5','B','_','_',' ','0','x','8','d',',','0','x','4','4',',','0','x','2','0',',','0','x','0','0',',','0','x','9','0',0,
        /* 1957 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','6','B','_','_',' ','0','x','8','d',',','0','x','8','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',0,
        /* 2007 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','7','B','_','_',' ','0','x','8','d',',','0','x','0','4',',','0','x','0','5',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',0,
        /* 2062 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','G','R','O','U','P','_','_',' ','7',0,
        /* 2087 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /* 2112 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','2','B','_','_',' ','0','x','6','6',',','0','x','9','0',0,
        /* 2142 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','3','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 2177 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','4','B','_','_',' ','0','x','6','6',',','0','x','6','6',',','0','x','6','6',',','0','x','9','0',0,
        /* 2217 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','G','R','O','U','P','_','_',' ','4',0,
        /* 2242 */ 140,'%','1',',','p','6',0,
        /* 2249 */ 195,'_','_','A','L','I','G','N','_','J','M','P','_','T','H','R','E','S','H','O','L','D','_','_',' ','1','6',0,
        /* 2277 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /* 2302 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','2','B','_','_',' ','0','x','6','6',',','0','x','9','0',0,
        /* 2332 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','3','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','0','0',0,
        /* 2367 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','4','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','4','0',',','0','x','0','0',0,
        /* 2407 */ 195,'_','_','A','L','I','G','N','_','1','6','B','I','T','_','G','R','O','U','P','_','_',' ','4',0,
        /* 2432 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /* 2457 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','2','B','_','_',' ','0','x','6','6',',','0','x','9','0',0,
        /* 2487 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','3','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','0','0',0,
        /* 2522 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','4','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','4','0',',','0','x','0','0',0,
        /* 2562 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','5','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','4','4',',','0','x','0','0',',','0','x','0','0',0,
        /* 2607 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','6','B','_','_',' ','0','x','6','6',',','0','x','0','f',',','0','x','1','f',',','0','x','4','4',',','0','x','0','0',',','0','x','0','0',0,
        /* 2657 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','7','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','8','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',0,
        /* 2712 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','8','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','8','4',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',0,
        /* 2772 */ 195,'_','_','A','L','I','G','N','_','3','2','B','I','T','_','G','R','O','U','P','_','_',' ','8',0,
        /* 2797 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','1','B','_','_',' ','0','x','9','0',0,
        /* 2822 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','2','B','_','_',' ','0','x','6','6',',','0','x','9','0',0,
        /* 2852 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','3','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','0','0',0,
        /* 2887 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','4','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','4','0',',','0','x','0','0',0,
        /* 2927 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','5','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','4','4',',','0','x','0','0',',','0','x','0','0',0,
        /* 2972 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','6','B','_','_',' ','0','x','6','6',',','0','x','0','f',',','0','x','1','f',',','0','x','4','4',',','0','x','0','0',',','0','x','0','0',0,
        /* 3022 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','7','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','8','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',0,
        /* 3077 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','8','B','_','_',' ','0','x','0','f',',','0','x','1','f',',','0','x','8','4',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',',','0','x','0','0',0,
        /* 3137 */ 195,'_','_','A','L','I','G','N','_','6','4','B','I','T','_','G','R','O','U','P','_','_',' ','8',0,
        /* 3162 */ 199,0,
        /* 3164 */ 204,'u','n','k','n','o','w','n',' ','a','l','i','g','n','m','e','n','t',' ','m','o','d','e',':',' ','%','1',0,
        /* 3192 */ 200,0,
        /* 3194 */ 167,'%','2',0,
        /* 3198 */ 235,'_','_','A','L','I','G','N','_','J','M','P','_','T','H','R','E','S','H','O','L','D','_','_',' ','%','2',0,
        /* 3226 */ 200,0,
        /* 3228 */ 235,'_','_','A','L','I','G','N','M','O','D','E','_','_',' ','%','1',',','_','_','A','L','I','G','N','_','J','M','P','_','T','H','R','E','S','H','O','L','D','_','_',0,
        /* 3270 */ 202,0,
        /* 3272 */ 231,'a','l','i','g','n',' ','1','-','2','+','.','n','o','l','i','s','t',0,
        /* 3291 */ 212,'a','l','i','g','n',' ','1','-','2','+','.','n','o','l','i','s','t',0,
        /* 3310 */ 167,'%','2',0,
        /* 3314 */ 't','i','m','e','s',' ','(','(','(','%','1',')',' ','-',' ','(','(','$','-','$','$',')',' ','%',' ','(','%','1',')',')',')',' ','%',' ','(','%','1',')',')',' ','%','2',0,
        /* 3357 */ 199,0,
        /* 3359 */ 221,0,
        /* 3361 */ 193,'%','$','p','a','d',' ','(','(','(','%','1',')',' ','-',' ','(','(','$','-','$','$',')',' ','%',' ','(','%','1',')',')',')',' ','%',' ','(','%','1',')',')',0,
        /* 3402 */ 160,'%','$','p','a','d',' ','>',' ','_','_','A','L','I','G','N','_','J','M','P','_','T','H','R','E','S','H','O','L','D','_','_',0,
        /* 3435 */ 'j','m','p',' ','%','$','e','n','d',0,
        /* 3445 */ 't','i','m','e','s',' ','(','(','(','%','1',')',' ','-',' ','(','(','$','-','$','$',')',' ','%',' ','(','%','1',')',')',')',' ','%',' ','(','%','1',')',')',' ','n','o','p',0,
        /* 3489 */ '%','$','e','n','d',':',0,
        /* 3496 */ 199,0,
        /* 3498 */ 't','i','m','e','s',' ','(','%','$','p','a','d',' ','/',' ','_','_','A','L','I','G','N','_','%','[','_','_','B','I','T','S','_','_',']','B','I','T','_','G','R','O','U','P','_','_',')',' ',  9,'d','b',' ','_','_','A','L','I','G','N','_','%','[','_','_','B','I','T','S','_','_',']','B','I','T','_','%','[','_','_','A','L','I','G','N','_','%','[','_','_','B','I','T','S','_','_',']','B','I','T','_','G','R','O','U','P','_','_',']','B','_','_',0,
        /* 3609 */ 193,'%','$','p','a','d',' ','%','$','p','a','d',' ','%',' ','_','_','A','L','I','G','N','_','%','[','_','_','B','I','T','S','_','_',']','B','I','T','_','G','R','O','U','P','_','_',0,
        /* 3655 */ 160,'%','$','p','a','d',' ','>',' ','0',0,
        /* 3666 */ 'd','b',' ','_','_','A','L','I','G','N','_','%','[','_','_','B','I','T','S','_','_',']','B','I','T','_','%','[','%','$','p','a','d',']','B','_','_',0,
        /* 3704 */ 200,0,
        /* 3706 */ 200,0,
        /* 3708 */ 220,0,
        /* 3710 */ 200,0,
        /* 3712 */ 202,0,
        /* 3714 */ 'a','l','i','g','n','m','o','d','e',' ','g','e','n','e','r','i','c',0,
        /* 3732 */ 0
};
#endif

#if defined(OF_AOUT) || defined(OF_AOUTB)
const unsigned char aout_stdmac[] = {
    /* From ./output/outaout.mac */
        /*    0 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','.','t','e','x','t',']',0,
        /*   26 */ 218,'_','_','N','A','S','M','_','C','D','e','c','l','_','_',' ','1',0,
        /*   44 */ 202,0,
        /*   46 */ 0
};
#endif

#if defined(OF_AS86)
const unsigned char as86_stdmac[] = {
    /* From ./output/outas86.mac */
        /*    0 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','.','t','e','x','t',']',0,
        /*   26 */ 218,'_','_','N','A','S','M','_','C','D','e','c','l','_','_',' ','1',0,
        /*   44 */ 202,0,
        /*   46 */ 0
};
#endif

#if defined(OF_BIN)
const unsigned char bin_stdmac[] = {
    /* From ./output/outbin.mac */
        /*    0 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','.','t','e','x','t',']',0,
        /*   26 */ 212,'o','r','g',' ','1','+','.','n','o','l','i','s','t',0,
        /*   41 */ '[','o','r','g',' ','%','1',']',0,
        /*   50 */ 202,0,
        /*   52 */ 218,'_','_','N','A','S','M','_','C','D','e','c','l','_','_',' ','1',0,
        /*   70 */ 202,0,
        /*   72 */ 0
};
#endif

#if defined(OF_COFF) || defined(OF_WIN32) || defined(OF_WIN64)
const unsigned char coff_stdmac[] = {
    /* From ./output/outcoff.mac */
        /*    0 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','.','t','e','x','t',']',0,
        /*   26 */ 218,'_','_','N','A','S','M','_','C','D','e','c','l','_','_',' ','1',0,
        /*   44 */ 202,0,
        /*   46 */ 212,'e','x','p','o','r','t',' ','1','+','.','n','o','l','i','s','t',0,
        /*   64 */ '[','e','x','p','o','r','t',' ','%','1',']',0,
        /*   76 */ 202,0,
        /*   78 */ 212,'s','a','f','e','s','e','h',' ','1','.','n','o','l','i','s','t',0,
        /*   96 */ '[','s','a','f','e','s','e','h',' ','%','1',']',0,
        /*  109 */ 202,0,
        /*  111 */ 0
};
#endif

#if defined(OF_ELF) || defined(OF_ELF32) || defined(OF_ELF64)
const unsigned char elf_stdmac[] = {
    /* From ./output/outelf.mac */
        /*    0 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','.','t','e','x','t',']',0,
        /*   26 */ 218,'_','_','N','A','S','M','_','C','D','e','c','l','_','_',' ','1',0,
        /*   44 */ 195,'$','_','%','1',' ','$','%','1',0,
        /*   54 */ 202,0,
        /*   56 */ 218,'o','s','a','b','i',' ','1','+','.','n','o','l','i','s','t',0,
        /*   73 */ '[','o','s','a','b','i',' ','%','1',']',0,
        /*   84 */ 202,0,
        /*   86 */ 0
};
#endif

#if defined(OF_MACHO) || defined(OF_MACHO32) || defined(OF_MACHO64)
const unsigned char macho_stdmac[] = {
    /* From ./output/outmacho.mac */
        /*    0 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','.','t','e','x','t',']',0,
        /*   26 */ 218,'_','_','N','A','S','M','_','C','D','e','c','l','_','_',' ','1',0,
        /*   44 */ 202,0,
        /*   46 */ 0
};
#endif

#if defined(OF_OBJ)
const unsigned char obj_stdmac[] = {
    /* From ./output/outobj.mac */
        /*    0 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','.','t','e','x','t',']',0,
        /*   26 */ 212,'g','r','o','u','p',' ','1','+','.','n','o','l','i','s','t',0,
        /*   43 */ '[','g','r','o','u','p',' ','%','1',']',0,
        /*   54 */ 202,0,
        /*   56 */ 212,'u','p','p','e','r','c','a','s','e',' ','0','+','.','n','o','l','i','s','t',0,
        /*   77 */ '[','u','p','p','e','r','c','a','s','e',' ','%','1',']',0,
        /*   92 */ 202,0,
        /*   94 */ 212,'e','x','p','o','r','t',' ','1','+','.','n','o','l','i','s','t',0,
        /*  112 */ '[','e','x','p','o','r','t',' ','%','1',']',0,
        /*  124 */ 202,0,
        /*  126 */ 212,'i','m','p','o','r','t',' ','1','+','.','n','o','l','i','s','t',0,
        /*  144 */ '[','i','m','p','o','r','t',' ','%','1',']',0,
        /*  156 */ 202,0,
        /*  158 */ 218,'_','_','N','A','S','M','_','C','D','e','c','l','_','_',' ','1',0,
        /*  176 */ 202,0,
        /*  178 */ 0
};
#endif

#if defined(OF_RDF)
const unsigned char rdf_stdmac[] = {
    /* From ./output/outrdf.mac */
        /*    0 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','.','t','e','x','t',']',0,
        /*   26 */ 212,'l','i','b','r','a','r','y',' ','1','+','.','n','o','l','i','s','t',0,
        /*   45 */ '[','l','i','b','r','a','r','y',' ','%','1',']',0,
        /*   58 */ 202,0,
        /*   60 */ 218,'_','_','N','A','S','M','_','C','D','e','c','l','_','_',' ','1',0,
        /*   78 */ 202,0,
        /*   80 */ 0
};
#endif

#if defined(OF_RDF2)
const unsigned char rdf2_stdmac[] = {
    /* From ./output/outrdf2.mac */
        /*    0 */ 195,'_','_','S','E','C','T','_','_',' ','[','s','e','c','t','i','o','n',' ','.','t','e','x','t',']',0,
        /*   26 */ 212,'l','i','b','r','a','r','y',' ','1','+','.','n','o','l','i','s','t',0,
        /*   45 */ '[','l','i','b','r','a','r','y',' ','%','1',']',0,
        /*   58 */ 202,0,
        /*   60 */ 212,'m','o','d','u','l','e',' ','1','+','.','n','o','l','i','s','t',0,
        /*   78 */ '[','m','o','d','u','l','e',' ','%','1',']',0,
        /*   90 */ 202,0,
        /*   92 */ 218,'_','_','N','A','S','M','_','C','D','e','c','l','_','_',' ','1',0,
        /*  110 */ 202,0,
        /*  112 */ 0
};
#endif

const unsigned char * const nasm_stdmac_after_tasm = &nasm_stdmac[37];

const unsigned char *nasm_stdmac_find_package(const char *package)
{
    static const struct {
         const char *package;
         const unsigned char *macros;
    } packages[2] = {
        { "altreg", nasm_stdmac_altreg },
        { "smartalign", nasm_stdmac_smartalign },
    };
#define UNUSED 16383
    static const int16_t hash1[2] = {
        0,
        -1,
    };
    static const int16_t hash2[2] = {
        1,
        UNUSED,
    };
    uint32_t k1, k2;
    uint64_t crc;
    uint16_t ix;

    crc = crc64i(UINT64_C(0x076259c3e291c26c), package);
    k1 = (uint32_t)crc;
    k2 = (uint32_t)(crc >> 32);

    ix = hash1[k1 & 0x1] + hash2[k2 & 0x1];
    if (ix >= 2)
        return NULL;

    if (nasm_stricmp(packages[ix].package, package))
        return NULL;

    return packages[ix].macros;
}
