#include "gtk.h"
/* XPM */
static const char *const xpm_icon_0[] = {
/* columns rows colors chars-per-pixel */
"96 96 92 1 ",
"  c #010101",
". c #0C0C0C",
"X c #141414",
"o c #1B1B1B",
"O c #232323",
"+ c #2B2B2B",
"@ c #323232",
"# c #3B3B3B",
"$ c #007F00",
"% c #454545",
"& c #4B4B4B",
"* c gray32",
"= c #5A5A5A",
"- c #656565",
"; c #6A6A6A",
": c #737373",
"> c #7D7D7D",
", c #008500",
"< c #038A03",
"1 c #098709",
"2 c #0B8D0B",
"3 c #138E13",
"4 c #1A8F1A",
"5 c #139113",
"6 c #1C931C",
"7 c #239523",
"8 c #279827",
"9 c #2B9A2B",
"0 c #309730",
"q c #339B33",
"w c #3D9E3D",
"e c #3AA13A",
"r c #419F41",
"t c #45A345",
"y c #4EA94E",
"u c #53A453",
"i c #59A759",
"p c #5CAB5C",
"a c #64AB64",
"s c #6FAE6F",
"d c #61B061",
"f c #6BB46B",
"g c #70AF70",
"h c #75B175",
"j c #75B975",
"k c #7EB47E",
"l c #7FBD7F",
"z c #858585",
"x c #898989",
"c c #969696",
"v c #9A9A9A",
"b c #83B683",
"n c #82BE82",
"m c #8CB88C",
"M c #92BB92",
"N c #9BBE9B",
"B c #A3A3A3",
"V c #ACACAC",
"C c #B4B4B4",
"Z c #BCBCBC",
"A c #8AC18A",
"S c #96C696",
"D c #9DC99D",
"F c #A3C0A3",
"G c #A2CBA2",
"H c #ABC3AB",
"J c #B4C6B4",
"K c #BDC9BD",
"L c #B2D1B2",
"P c #BAD4BA",
"I c #C5C5C5",
"U c #C4CBC4",
"Y c #CDCECD",
"T c #C0D6C0",
"R c #CFD0CF",
"E c #CADACA",
"W c #D1CFD1",
"Q c #D3D3D3",
"! c #D4DED4",
"~ c #DBD3DB",
"^ c #DBDBDB",
"/ c #D7E0D7",
"( c #DBE1DB",
") c #E2D5E2",
"_ c #E8D7E8",
"` c #E5E5E5",
"' c #E9E7E9",
"] c #EBEAEB",
"[ c #F1EAF1",
"{ c #F8EDF8",
"} c #F4F4F4",
"| c #FBFBFB",
/* pixels */
"``'``'`'```'`'```'`'`'```'`'``'`'```'`'`''```'```''``````'```'````````'````````'`''````'````'```",
"``'`````'``'``]`````'```'```````''```'`'``'```````````````````````````'``'`'````'``'`''````'`'`'",
"`'`''''``'`''````````````''````````````````'`'''```(``^```(``)``````]```(`(```^`(`(`^`(```````'`",
"````^^(`(``((``(`(```(```(^``(```(````(```(`(`^!'}}}}}}}}}}}}}}}}}}'Q'}}||}}}|}||}}}|}|}|`]`````",
"'`]^ X]}]}}}}}}}]}}}]}}}|C:|]}}}}]}}}}]}}}}]]|= -czxxxxxxxxzxxxxxzc& &BccccccvccccccccccB@v|`'``",
"``'Q  ******************=#+=*****************=o                                           .C](''",
"``]^ .QQQQQRQQRQR!QQQQRR(v-'RQQQQQQQQQQQQQQQQ(:X=========*======*=-@ +=&******&***&***&=# %]````",
"``]! X']]]]]]]]']]]]]]]'|V;|`']]]]]]]']]]]]''}^=||}|}||}||||}||}|}|x ;}^^`^`^``^`^`^``^]B &|(''`",
"``'^ .(`````````````````}B:|(```````````````']Y*}^`((``(`^`^``^``^}> -^IIYYYYYIYYYIYYYIQc %}(``'",
"``'^ .`'`'``]````'``'`'`}V;|``'``'`````]````']Y*}``'````````````'^|> -`IYYYYYYYYYYYYRYY^v %|``'`",
"``]^ .`'`````'`]''````'(}V;|(`'`]``]]``]`]]``]Q*}`'```'``]]''`````|> ;`YYQYYYYQQQYYYQYY^v %}`'``",
"'`'^ .('``'```'!Y^'`````}B;|```'`````````````]Y*}^```'`'](!^`'````|> -^YYYYYQIZZIYYWYWY^c %|(`'`",
"``]! .````'```^+ %]`````}B;|`````````````````]Y*}``````'A5,,j'````|> -^YYYYQBX  zQYYYRY^v %|```'",
"``'^ .`'`````};  %]`````}V:|(``']`]``]`]`]`]]]R*}`'```]A,yPDS'``'(}> ;`YQYYQv=% z^YRQYY^v %}``''",
"``'^ .('``'`]C.: %'`````}V;|`''```]``]```]```]E*}(`'`'(82DSP]'`'``|> -`IYQQYY^; zQYYYYY^c %|^```",
"``'^ .```'`']+*U &]`````}V;|(````````````````]Y*}`'`']/2,5<,j'``'^|> ;(YYYYYYQ- zQYQYRY^v %}```'",
"'`'^ .````(}z.QK %'`````}B;|`''``````]````]`']R*}````'/2,D!22!]`'`|> ;`YYYYRYQ- zQYYYYY^c &}(''`",
"``'^ .````']= X.  %^'```}V;|```'`]`````]]````]Y*}```''(8</}82E]``^}s ;^YYYWYQ]; x'YYQWY^v %|````",
"``]^ .`````]B=-& Xz`````}V:|``'``]`]``````'``]Y*}`'``(]l,tf,t]````|> ;)IYYYQV=+ #-IQYYY^v %}``'`",
"``]! .```'``}}|^X-|`````}B;|^``'`````]``````']Y=}``''''`A65d^'````|> ;`YRYY^c ooX CQYYY^v %}````",
"``'^ .```````^``]'(```'`}V;|(``'````]``]````']Y*}``'```'][]]'````(|> -)YYQQYQ^QQ^^RYYYY^c %}``'`",
"``'^ .````'`````'`'`'```}B;|``'``]]`````]``]']Y*}(`''`````````````|> -`IYYYYYYYYYYYYYYY^v %|('`'",
"``'^ .````'````````'`'``}V;|```'`]```````````]Y*}````'`'```````''_{> -`YRYWYYYYYYYRYYYY^v %}`''`",
"``'^ .````''`'``'`'`'``(}V;|(`'`````]``]``]``'Y*}```'````'`'`''``_{s -^YYYYYYYYYYYYYYYY^c %|(```",
"'`]! .^``^```^``(`(```^([B;|^``^(```(``^``(`^'Y*}^```(```(`)``(``^}s ;]Q^Q^^^Q^^^Q^^^QQ`B %}``'`",
"``'^ X|||||||||||||||||||Z>|}|||||||||||||||||`=|}|||||||||||||||}|x =ZBVVVVVVVVVVVVVVVZz &|```'",
"``'^  --;----;-;;-;---;-;&+:--;------;;-;---;;=O;-----;-;;;;-;--;-:@                      .I]```",
"``'^ .VCVVCVVCVVVVCVCVVVZ>*IVCVVCVCVVVCVVVCVVCv%ZVCVVCVVVVVVVVVCVVZ: @+@++++++++++++++++@ &^```'",
"``]^ .]}}}}}}}}}}}}}}}]}|C:|}}}}}]}}}}}}}}}}}|^=|]}}]}}}}}}}}}}}}}]}*]}}}]}}}]}}]}]}}]}]|=Q}````",
"``'Q .(`````````````````}V;|^```````````(````'Y*}``````````````````'&^````(```(````````^}=I]```]",
"``]! .`'````````````````}V;|````'``'`````'```'Y*}```''`````````````'&```'```````'''`````|=K}`'``",
"'`]^ .``````````````````}B;|`````''`'`````''`]Y*}``'``'`(````'``''`'&``````'`'`'````````}=I]````",
"``'^ .('``````'']'``````}B:|(``````]``]``]```]Y*}```````]]]]]`'````]&('````']``]``]``]`(}=U[''`]",
"``'^ .`'``'```'&.=]`````}V;|``'``'``````````]]Q*}``````'Ge25A]```]`]&`'`'```````````````|=I]````",
"'`'! .`'`````}z  %]`````}V;|```'````]``]]````]E*}('```]D,8Afn]`````]*````]`'````]````''(}=I}`'`'",
"'`]^ .(`````'YX= %]`````}V;|(`''`'`]```````]`]Y*}``'`''e<LE/]```````&(``````]``]``]`````}=I]````",
"``'! .`'`'``}%@Z %'`````}V;|`````````]```]``']Q*}`'``'/226,2S]`````'&````````]``````'`'(|=I]`]``",
"``'^ .`'``(}v.RY &}```'`}B;|('```]```````````]Y*}````'/2,nL24^'`'``]&('``]`]````'`'`````}=I]```]",
"``'^ .(````]= %+ .-(````}V;|`````]]``]]``'```]R*}````'(6</{92E'`'``'*(```]`````]```'``'(|=K}````",
"'`'^ .`'``']x+++ .=)````}V;|(`'``````````'`'']R*}`````[f,fS,0````'`'&`'``````]``]`'`'```}=I]````",
"``'^ .````]`]||Y &|''`'(}V;|```'`````'`'`'```]R*}``''`'/d2,eP'`'```]&(````]```````]``'``}=I]`]`]",
"``'^ .('`````(`(Q^(```'`}B;|``'``]]`'`'```'`']Y*}(``````'//`]'`'`'`]&`'`]`````]``````'`(|=U]````",
"``]^ .``````'```]''''`'(}V;|^``'````'`'``````]Y*}````````'''```````'*('`````]``']``]'```}=I]````",
"'`'! .`'``''``'``````'``}V;|```'`]````````]``]Y*}`'`''`````````'`'`'&`````]````'````````|=I[``'`",
"``'^ .``'``````'`'`'````}B;|)````]``'```]````]Y*}``'``````'``''````'&``````````````````(|=I]'``'",
"`''^ .`''''']'']'''''''`|V:|(`(``(`((``(`(``('Y*}^`(``````(``(`(``^'&`'`]]]`''''`]'''']`|=I]````",
"'`'^ .^(^^(^/^)(/(^^(`/^]B-||||||||||||||||}||`=|}|||}||||||}||||||]&^^`^^/(`^`^/(`^(()^]*U}`'''",
"``'^   .. .. . . .. . .  . >xzxxxxxxxxxxxxxxxx>@czxxxxxzxxxxxxxxxxc& .. .. . . . . . .. . OQ'```",
"``]!    .  .  .  .  .  .   :czxxxxxxxxxxxxxxxx>@cxxxxxxxxxzxxzxxxzc&    .  .  . . .    .  OR]```",
"``'^ .IYIYIIYIIYIIYIIYIIQO Q|}|||}||}|||||||||^=|}|||||}|||||||||}|x -~IUYIIYIIIIUIIYYIQc &|('`'",
"``'^ .YQQQYQQQQRQRQQQQRYQO I]``(``(``((``^`(`'Y*}^`^(`(```(`^````^}> -`YRQQQQYQRQWQQQYY^v %}````",
"``'^ .YYYYYYYYYYYYYYYYYYQO I]``'```''']`'``'`]Q*}`'``''````'``````|> ;`IYYYYYYYYYYYYYYY^v %}``'`",
"``'^ .YYYQYQYYYYYYYYYYYY^O I]`'```'```]``'```]R*}`'`'````````'`'``|> ;^YYQYWYYYYYYYWYYY^v %}```'",
"'``^ .YRYYYYY^^^^QYYYQYYQO I]``'`''`````'``'']Y*}`````'']}}}]`'`'(}> -`IYYRRQ^^`QWQYQYY^v %|(''`",
"``]^ .YYYYYYY>%+=YRYQYRYQO I]````````]]`'````]Q*}(``'``]I=+%B]````|> -`YYYYQC*#@vQYYYYY^v %}````",
"``]! .YYYYYYY@o +YQYWYYY^O I}```'`'````````'`]Y*}``'``]C..&@:]``'^|> ;^YQYYQcXX zQYYQYY^c %|('`'",
"'``^ .YQYQYYYIV.@YQYYQWYQO I]``]`````````````]Y*}``'```& V}'``'```|> -^YYRYQII; zQYYQYY^v %|``'`",
"``'^ .YYYYQYY^V +YYYYYYYQO I}```]`]``]````]``]R*}(```'^X.@ +C]``'^|> ;`IQYYYY^- z^YYYYY^v %}``'`",
"'`'^ .YYYYYYYQV +YRYYQYY^O I]`````]``]]``]]``]E*}````]Q  =c O('```|> ;`YYYYYYQ- z^YYYYY^c %|^``'",
"```^ .YYYQYRY^C.@QQYRYYYQO U]``]````````````]]Y*}`'``'^X Q}+ Y](``|> -^YYQQYY^- z^YYYQY^v %}````",
"``'! .YYYYYYYZc +VIQYYYYQO I}`````]`````````']R*}``'``]= cI O`'```|> ;^YYQYYIC= :CYYYYY^c %|(''`",
"'`'^ .YYYQYYYO    =^YYQY^O I]'``]````]]``]]``]Y*}`````]Y@  XB]``'(}> -`IYYY^c     CQYQY^v %}``''",
"``'^ .YYYQYWYVBBBvCQYYYYQO I}(```````````````]Y*}``'`'`]`CCQ]`````|> -`YQYYQIvBvBvYYYYY^v %}````",
"``'^ .YQYYYYYQ^^^^QYYYRYQO I]``]``]``]```'`'']Y=}(```````}}]`'`''^|> ;^YYYYYQ^^^^^YYQYY^v %}```'",
"``'^ .YYYYYYYYYYYYYYYYYYQO I]`'``````'``'`'``]Y*}``'```'``(``'````|> ;`IRYYYYYYYYYYYYWY^v %|````",
"'``^ .YRYYQYYQYYYYYYYYYYQO I]``'````'`'``````]Y*}`'`'````````````(|z -^YYYQYQYQYYYYYYYY^v %}````",
"``]^ .UYYYYYYYYYYYYYYYYYQO I]```````````'(```'Y*}``````(`````````^|> ;`IYYYYYYYYYYYYYUY^c %}````",
"``]! .Q^^Q^Q^Q^^Q^^Q^^^Q`O Y|]}]}}]}]}]}}}]}}}~=|]}]}]}}}}]}}[]}}'|z ;]Q^Q^QQ^^QQ^^Q^^Q'B &|(`'`",
"'`'Q  O++O++O+O++++O+++O+  O+++++++++++++++++++.@++++++++++++++++++o X+O+O++O+++++++O+O+O  B}```",
"``]^.                                                                                      c}```",
"``'^ .VVVVVVVVVVVVVVVVVVC>*KBVVVVVVVVVVVVVVVVCv#CVVVVVVVVVVVVVVVVVZ- *ZVVVVVVVVVVVVVVVVVZ%x^'`'`",
"'`'^ .QQ^Q^^Q^^QQ^^QQ^^Q`B-]Q^^^Q^^Q^^^Q^^Q^^^K&`Q^Q^^Q^Q^^Q^^Q^QQ]: ;'Q^^Q^Q^Q~Q^^QQ^^Q'*C''```",
"``]! .YYYYYYYYYYYYYYYYYY^c-`IYYYYYYYYYYYYYYYYQZ&^YYYYYYYYYYYYYYYYI^: -^IYYYYYYYYYYYYYYYI^*V`'`'`",
"``'^ .YYYYYYYYWYYYYYYYYY^c=`YYYYRYYYYYYYYYYYRQC&^YYYYRYYWYIYYQYYRY`: -`YYQYYYYYUYYYYYQYY^*V`''``",
"``'^ .YRYYYYYYY~)~YWQYYY^v-`YQYYYYYYQ)~YYQYQYQC&^YYYYYYRRQ`^QYYRRY(: -^YYQYYW)))~YYYYYYY(*V`'`'`",
"``'^ .YYWRYYYY~bibQYYYYY^v=`IYWYQYYWNihYYYRRRQZ&^YYRQYWYQV=;ZQYYYY): -`IYYYWJgpamYQYYRYI`&V`'```",
"``'^ .YYYQYRYQN3$0QYYQYY^c=`YYYYYYQK4$4UWYWYYQZ&^YYQYYYYQ#  V^YYRY): -`YYYYQg<3<,aQQYRYY(&C`````",
"'``^ .YRYYYYYQq7,tQYYYYY^c-(YYYYYY~u727YWYYQRQC&^YRYYYY^:Xo.CQYYYU`: -^YYQYRJU_m,0YWYRQY(*V`]```",
"``]^ .YYYQYY~s4M,wQYYYRY)v-`YYYYY~N<M36UWYYYYQZ&^YWYQYQC.>@ VQYYYY^: -`YYYYYQKNp,bQYYRYY`*V`]``]",
"``]! .YYYYYQJ2mK,t~YYQYY(c=`YYQYWU6a~<6YQYYQYQZ&^YYQYYQ##`+ Z^YYWY`; -(YQYYY~a$,5NQYYYYY^*V`````",
"'``^ .YQYYY~i2ms,8NYYYYY^v-`YYYY~k,bb25mUWYWYQZ&^YYYQQB -co >IYYYY`: -^YQYYY~YKm,7UYYRYY^&C`````",
"``'^ .YYYYYQi,,,2,0UQYYY^c=`IYYY~h,,,,,4JQYYYQC&^YYQYQc      vQYYY^: -`YYRYWMJWS25UQYYQY^*V`'``'",
"'`'^ .YYYYYQIJUN$0UYYYWY^v-`YRQYWUJKH23JQYYQYQZ&^YYYYYYCCZO vQYYYY^: -`IYYYQ0,,,<hWYYQYI`*V`'`'`",
"```^ .YYYYYYWQQUgNQRYQYY^v=`YRYYWWQQRkbYYYYYYQZ&^YQYRYRQQ^x>IQYQYY`: -^YYRYRHbhkHQYYYWYY^*V````'",
"``'! .YYYYYWYYYQ)~YYQYYY^c=`IYYYYYYYY~~YYYYYYQC&^YYQYYYYYY^`QYYYYI`; -`YQRYYQ~)~QYYYYQYY(&V`'``'",
"'`'^ .YYYQWYQYYYYYWYYYYY^c-`YYWYQYYRYYYYQYQYYQZ&^YYYYQQYYYYYYRYYYY`: -^YYYYQYYYYYWYYYYYY(*C`````",
"``'^ .YYYYYQYYWYYYYWQYRY^v-`YYYQQYYRQYQYYYQYRQZ&^YQYYYYYYYYYYYWYYY): -^YYQYYWWWWYWYQQYYY`&V']``]",
"``'^ .IYYYIYIYYYYUYIYIYI^c=^YYYYYYYYYYYRYYYYYQC&~IUYIYYIYYIYIYYYUU^: -`YYYYYYYYWYYYYYYYY^*V(````",
"``'^ .(``^``^``^^``()(`^]B;'YQQQQQQQQQQQQQQQQQU*}^^`^`^``^``^``^)/}> ;`QQQQWQQQQQQQQQQQY'=Z]'```",
"'`'Q  **&**&&*&***&****&*#OCIZZZZZZZZIZZKZZZZY;X*******&&**&**&****@ =YZZZZKZZZZZZKZKZZIBo@C}```",
"``]^                       #&%&&&&%&&&%&&&&&&&X                      O&&&&&&&&&&&&&%&&&&@  c}('`",
"``]!..zxxxxxxxxxxxxxxxxzco Z`^^^^^^^^^^^^~^^^]* -czxxxxxxxxxzxxxxzc& :]Q^^^/^^^^^^^^^~Q`B +Y]``'",
"``'`^^}}}}}}}}}}}}}}}}}}}^!(`(`)(`(``(`()(`((`^Q'}}}}}}}}}}}}}}}}}}'Q(```(`)```()(``(```^!(]`'`'",
"`'``''`(`(`(```(`)(``(```']````''`'``'``''`'`'']`````^```(`((``((```''``'```````''```'```]]`'```",
"'`'```````````````'````````````````````````````````````````````````````````````````````````````'",
"````'```'`'`````'``''`'`'```]``''`'```'``'`''`'`````````'`''`''```'```````````''`````'`'`']``'``"
};

/* XPM */
static const char *const xpm_icon_1[] = {
/* columns rows colors chars-per-pixel */
"88 88 92 1 ",
"  c #000000",
". c #0D0D0D",
"X c #131313",
"o c #1C1C1C",
"O c #242424",
"+ c #2C2C2C",
"@ c #333333",
"# c #3B3B3B",
"$ c #007E00",
"% c #424242",
"& c #4C4C4C",
"* c #535353",
"= c #5B5B5B",
"- c #646464",
"; c #6C6C6C",
": c #727272",
"> c #7C7C7C",
", c #008400",
"< c #028A02",
"1 c #0C8D0C",
"2 c #108E10",
"3 c #149114",
"4 c #1B931B",
"5 c #249524",
"6 c #229822",
"7 c #299729",
"8 c #289A28",
"9 c #339C33",
"0 c #3D9B3D",
"q c #37A037",
"w c #3DA23D",
"e c #409F40",
"r c #46A446",
"t c #4CA34C",
"y c #4BA84B",
"u c #55A555",
"i c #55AC55",
"p c #5CAB5C",
"a c #64AC64",
"s c #6CAE6C",
"d c #63B163",
"f c #6CB56C",
"g c #72AF72",
"h c #75B175",
"j c #74B874",
"k c #7AB37A",
"l c #818181",
"z c #8B8B8B",
"x c #939393",
"c c #9A9A9A",
"v c #85B685",
"b c #82BE82",
"n c #8DB98D",
"m c #93BB93",
"M c #9ABD9A",
"N c #A3A3A3",
"B c #AAAAAA",
"V c #A1BFA1",
"C c #B3B3B3",
"Z c #BABABA",
"A c #8DC28D",
"S c #95C595",
"D c #98C798",
"F c #9CC89C",
"G c #A6C1A6",
"H c #A6CCA6",
"J c #ACC3AC",
"K c #B4C6B4",
"L c #B8C7B8",
"P c #BCC9BC",
"I c #B6D3B6",
"U c #BBD5BB",
"Y c #C4C4C4",
"T c #C5CBC5",
"R c #CDCDCD",
"E c #C1D7C1",
"W c #C7D9C7",
"Q c #CBDBCB",
"! c #D0CFD0",
"~ c #D3D3D3",
"^ c #D2DED2",
"/ c #DAD3DA",
"( c #DCDCDC",
") c #DDE2DD",
"_ c #E3D5E3",
"` c #ECD8EC",
"' c #E5E5E5",
"] c #E9E7E9",
"[ c #EBEBEB",
"{ c #F2EBF2",
"} c #F4F4F4",
"| c #FAFAFA",
/* pixels */
"']']'''']]]]''']'''']]]'''']']''''']'''''''''']'']'''']']']''']'''']']'']]''']']'''']']'",
"'''''']''''']'''''']''''']''''']']']']']'''''']'''''']'''''''')'''''']]'''']']''''']''['",
"'''[|]'''')'')''''''']'[]'')'''''')'''')''}}'''''''']'''''''][|]''''''']''')''_')[]'['''",
"]'[T>R|}}}}}}}}}}}}}}[|Y)|}}}}}[}}}}}}}}}|Nx']][][]]][]]]]['[Zl^|[}}[}}[}[}}[}}}|Z][''''",
"''}x -CNBNBBBBBNNBBNNNZ*lCNBBNBBBNBNBNBBNBO O++O+OO++O+OO++O+o O@+@+@+@++++@+@@+@X=]'']'",
"''|x *z>>>>>>>>>>>>>>>z%-l>>>>>>>>>>g:>>>zo                   .                   +)[)]'",
"''}x x|}|||||||||||}|}|>Y|||||||||||||{|}|c:[((()^(((((^(((~[; xRYYYYYYYTYYYYYPRc ;|)'''",
"''}x z}())_'('))'('''(};C[')')_'(''(''_`'}Nz|'][][][]]]]]][]|: c'RR~~~~~~~~~~~!(B -|)''[",
"''}x z}'''''''''']']''}:C}''''''']']''[''}Ng|(''''''''''''')|; c(RRRRRRRTRRRRRR~N -|''']",
"''|x z|(]]]'''[[''']')|:C})[''['']]''''')|N>|)']''''][['']''|: c(RRRRR~(/~RR~RR(N -|)'''",
"''|x z|'''']''TY''']''}:C}''['['']'''[['`{Nl|']''''[QE^'''')|: c(RRR!RYBCT~RRRR/N -|''']",
"'(}x z}']'])}c .Z[''''|:C}''''''''']'''''{Nl|)']']'p<,3U]]])}: c(R~R~BX  N~R~RR(N -|)']'",
"''}x z}(]'']~+. Z{''])}:C}'''''']''''''''}N>|_]''[j,S]IQ]'''|: c(RRR~Cz% N/R~RT(N -|''']",
"]'}x z|']''}*&- P[''])|:C}'''[[']'[''[[''}Nl|''']'53dwF['''(|: c(RRRRR'- B~RR!R(N -|'']]",
"')|x z|)''}BX'; T})]')|:C}''''''']'''['''}Nl|'''])3,yw,S{'''|: c(RRR~T~= B~RR!R(N -}('''",
"''|x z})''[%ox+ ;(]'''|:C}''''['''']'''''}Nl|)'']'41[Q,a['''}: c(R~!R~(- B(R!TR(N -|''''",
"''|x z}''']=.X  oP['')|:C[]]''['[''['''''}Nl|)'''[p,HA$b{'''}: c(RRR~YB& zC~RRR/N =|)]]'",
"''}x z})]''[]|- Y{']''|:Z}''']'''''']]']'}Nl|)]]'])r<<i)]'')|: c(R!R~B    @(RRR(N -|)'''",
"'_|x z|''']'''^R'''''(}:C['''''''']''''''}N>|'''''']Q)]]']]'|: c(RRRRRZZZZZ~RRR(N -|']']",
"''|x z|_']''''[[''''''|:Z[']]'['['''']]''}Nl|)]'']''[]''''')}: c(RRRR~~~~~~RRRR(N -|)'''",
"'_|x z}'']''']''']'']'}:C}'']'']'''''']]'}N>|''''']'''''''')|: c(RRR!!RRRRR!RRT(N -|'']]",
"]'|x z|)''''''''''''''|:C}''''']'''''''''}Nl|)''''''''''''')|: x~RRRTTTRTRTRTRR~N -|)'''",
"')}x z|'']]]]]]]]]']''|:C}]]]]]]]][[']]''|Nl|']]]]]]]]]]]]]'|: N[))__''(_)')_'(]C -|)]']",
"]'|x l[~(((((^((^((((([;B'(((^^)((^)(((((]c>[((((^((^((((((({; *:;;;;;;;;;;;;;;:= -}''''",
"')|x #-===============-+&-==========-===--%@-====-===-======-+                    O~['']",
"''}x z|[}[}[[[}[[}}[[]|>Z|[[[[}[[[[[[[[[[|Bl|[{[[[[[[[[[[[[[|Z#BcNBNNNNNNNNNNNNNB#B}']]'",
"')|x z|('''''''''''''(}:C[''''')')'''']'_}Nl|)''''''''''''''](-|}}|}}}}}}}}}}}}[|;~[''''",
"''}x z|(''''''''''''''|:C}']'']]']]'''']'}N>|)'']'''''']]]''[~=})'))''')''('''')}-R]'']'",
"]'|x z|''''']'''''']''}:C}'']''''''''']''}Nl|)'''''']''''''']~=[''''']]'''']]'''}-R[''']",
"''}x z}''''''][['']'')|:C}']]']'''[']''''}N>|)]'''][[{[]'']'](-}'''[''''''']]'])}-R[']''",
"')}x z}(]']'[LO+Y[']''}:C}''']''['[''[[''}Nl|']]'']D81qW[']']~=['''']'']'']]']''}-R['']'",
"''|x z|']''']#  Z[''''|:C}''''']'''''''''}Nl|)]''[D,iHjU]']']^-}'''['''']]''''')}-Q[']''",
"''}x z}''''|>+* Y[''''|:Z[)['''''[''[''['}N>|''']]93FSQ['''']~=})]]']'''[''[''''}-R[''']",
"''|x z|('']T.C; T[']')}:C}'']]']'''''''''}Nl|'''])3<511I{'''[(-['''']''''''']'])}-R[]]''",
"''|x z|'''}*+/& N'']''|:C}'''''''''['''''}N>|'''''3<^I,d{'''](=}']']'''['''']'''}=Q['']'",
"'(}x z}'''[%    .Z[''(|:C}''']]''['''''['}Nl|(''']r<)U$f{''']~-[)]'''['''''[''])}-R['']'",
"''}x z}('']TZT* c]''')|:C}''']'''[''[''['}Nl|']''[I3115W[''']~=}'''''']][''[''''|-R[''']",
"]'}x z|'']][[}Zz(]']''|:C}'']]']'''['''''}N>|)''''{WAD^[']'']^=}''']]]'''''''']'}-R[']''",
"')|x z|)''''''[}'']'')|:Z['']''''''''''''}Nl|)']']']}{]'''''](=}''']''']''''['')}-R['']'",
"''|x z}']']'''''']''])|:C}'''']''[''[''['}N>|''']''''''''']']~=}''''']''[''[''[)[-W['']'",
"''}x z})'')'''''''''''|:C}''''''''[''''''|Ng|)'''''''''']''']~-['')')'''''''''''}-T[']''",
"''|x x|]{}}[}[[}}[[}[[|>Z[')'''')'')''''([c>|_''''''''''')'''^-|]}{}}[[}[}[}[}[[|;~[''']",
"'_|x :TZZZZZZZZZZZZZZCR*N|}}}}|}|}}||}}}{{Cz|}}|}}|}}}|}|}|[|R%YZZZZZZZZZZZZZZZZY&Z}''']",
"''|z                    o;---------------;&@;---------------;@                    O(]'''",
"''}x @=***************& #(YRRRTWTTTTRRTRR/z:(YTRRRYRTTRTTRRY(- #****************% *}'']'",
"''}x z}((('(')__('((''R %|][][[[[[[[[[[[]|Bl|][[[[[][[[{[[[]|> B}('()_'_)_')'_([C -|'']'",
"''|x >(YRRRYTRTRRRRRR~C %}'''''']'''''''`}Nl|''''''''''''''(|: x~YRRTRRYTRRTRTR~c -|''']",
"''}x >(RRRRRRRTRRR!!T~Z %})']'[']]']']]]'}Nl|''''']'_'''''''|: c(RRR!RRTRRRR!TR(N -|(']'",
"''}x >(RRRRR(''~R~RRR~Z %|'']'''[''[']]''}Nl|)''']']||}]''''|: c(RR~R~('(~R~R~R~N -|)]']",
"''}x >'RRRRR>**B~RR~R~Z %}'''']''''''''''}Nl|)]]]'[T;&>~]'')}: c(RRRRY:*=C~R!RR(N -|)'']",
"''|x >(RR!~COX z~R!RR~Z #}''']''''''']']'}N>|''''[Z.o&@C['''|: c(R!R~No. N~RRRR(N -}'']'",
"''}x >(RRRRRR> z(RRRR~Z %}''']'][''[''']'}Nl|)]'][%.Z('']]')}: c(RRR~YR- N(RRRR(N -|'']'",
"''}x g(RR!R!(: z(T~~R~Z %}''''''''[''']''}N>|'''])X.o #~]'''|: c(R!!RR(= N~T~RR(N -|''''",
"''|x >(R~R!T(> z~RRRR~Z %}'''']''''']''''}Nl|)''])X Nx :}''(|: c(RRR~R~= N/!R!T(N -|''''",
"'_|x >_RRRRR]z c]RRRR(Z %}'''']'[''[]]]''}Nl|']'''+.[R -['''|: c(RRRRR]- Z'T~RR/N -})']'",
"''}x >'R~RRY*O +=RRRR~Z %}'']]']''''']'''}N>|)'''}x %# B}'''}: c(T~~~C%o +;~RRR(N -|)]']",
"''|x >(RRR~Y#@%#%~RRR~Z %})['['''''''''''}Nl|_''''[c%&B['''_|: c(R!R~C@#%+=(RRR(N -|'']'",
"''}x >(R~RRR''(''R~RR~Z %|)''''''''[[''['}Nl|']'']][||['''''|: c(R!RR~''''(RRRR(N -|(']]",
"''}x >(RRRRRRRRRRR!RR~Z %})['''[[''''[''`}Nl|_]'']''''''''])|: c(R~R!RRRRRRRRRR~N -})'']",
"''|x >(RRRR~RRRRRRRRR~Z %}''''''''''''''`{N>|)''''''']''''''|: c(TRRRRRR!T!RRRR(N -|'']'",
"''}x >'RRRRRR!R~~RRRR~L %}''''''['[''''')|N>|)''']'''']']]'(|: c(RRRRRR~!R!RRRR(N -|)'''",
"''}x >(R~R~~RR~RR~~RR(Z %}']['[''''''['['}Ng|)[']'']''']']]'|: c(R~R~~RR!!R~R~R(N -|''''",
"''|z ..X..X.....X....X.  XX.X.XXXXX.XXXXXX..XXXXXXXXXXXXXXXXX  .X..X..X....XX..X.  Y[']'",
"''}x XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXX. .XXXXXXXXXXXXXXXXX..Y['']",
"''|x >'R~~~~~~~~~~~~RR';N)~~~~!~/R~~~~~~~'x>'R~~~~~~~~~~~~~R'- c'R~~R~~~~~~~~~!!_=C]['''",
"''}x >(RRRRRRRRRRR!TRR_-N(RRRRRRR!RRRRRRT(x:(RRRRRRRRR!TRRRR'- c(RRRRRRRRRRR!TRT)=C]''''",
"''}x >'RRRRRRRRRRRRRRR'-N(T!RRRRRTTRRRRRR(x:)R!RRR!!!TRRRRRR(- c(RRRRRTRRRRRRRRR)*Z]''''",
"''}x >(RR~R!RR//~RR~RR(;N(T!R~RRR/_~RR~RR(x:'RRRRRRR~(/R!RRY'- c(RRRR////~RRR!~R(=Z]''['",
"''}x >(R!RR!RRMMT!RR~R(-N~R~RRRR~GnL~!RRR(x:(RRRR~R~ZzB~RRRR'- c(R~RRTVmMP/RR!RR(=C]''['",
"''|x >(RRR~T/k$<V/R!RR'-N(RRR~T/C1,g/T~RR(x>_R~RRRRR@ #~RRRR'- c(RRR/n<<,4G!RR!T(*Z]]'''",
"''|x >'RR~T!L54<J!RRRR(;N(~RRRR/e4<h/RR~R(x:)RRR~R(:o %~RRRR(- c(RRR~KK/s$s/RRRR(=C]'']]",
"''}x >(RR!R/0up<J/R!RR(-N(T~RR/h7v,h/RRRR(x:'T~RT~BXz.#~RRRR'- x(R!~T/Lme4K!R!RR(=C]''''",
"'(}x >(RRR/v4/p,L/R!RR';N~R~R/L3GG,v_T~RR(x:(RRR!~#=( %(RRRR(- c(RRRT/h,<5K!RRRR^=C]['''",
"''|x >'RRR!02p4,rL~RRR(-N(RRT/g,p9,7M/RRR(x:'RRR~B %& X>~RRR'- c(RRRR~/`n,y/R!!R(=Z]''''",
"''}x >(YRR!a572,5K!RRR(-N~RRT/n774,2n/RRR(x:'R~R~C#OO  -~RRR(; c(RRR/ssmt$a/RR!R(=C[''['",
"''|x >'R!RR//`a<P/RRRR'-N(RR!R//_G<n_TR~R(x:'YRRR~('~X&_RRRY'- x(RRR/h1<2pT!R!RT(*K[''''",
"''|x >'RRRRRTRRRRR!RRR(;N/R!R~RTRTRTR~R~R(x:'RRRRRRRRRT!RRRR(- c(R~RR~!!!/~RR!!R(=C]''''",
"''}x >(YR!RR~RRR!R~RRR(-N(RR!R!!R~~RRRRRR(x>(RRR!RRRRR!RR~RR'- c(TR!RRR~!RRRRRRT(=C]''['",
"''}x >(R~RRRRRRRRRRRRR'-N(!!RRRRRR~RRRR!R(x:'RRRRRRRRRRRRRRR(- c(R!R!R!RRR!!~R~R(*Z]['''",
"''}x >(RRRRRRRRRRRRRRT(-c(T~RRR~RRRRRRRRR(x;(YRRRRRRRRTRRRRY(- c(RRRRRRRR!RRRRRR^=C]'''[",
"''}x z}(('('(')'('(''(};B'~~(~~~~(~(~(~(~]cg[))'('(')')')'_({: c'(~/~(~(~~~(~(~^]-Y]''''",
"''}x @*&&&&&&&&&&&&&&&*O=ZBCCCCCCBCBCBCBBZ&O=&&&&&&&&&&&&&&&*+ gZBBCCBCBCCCBCCBZcO%R[']'",
"''|x                    o-===============-.                    %-===============%  Z})['",
"''}NXlPBCCCCCCCCCCCCCCN+-[)'(''''')'''''_{*@BCCCCCCCCCCCCCCBY:oC[))'''''''')'''[ZO;]''''",
"''']}[}[}[[}[}}[[}[}[}[}[')'''''')'''')'_'[}[}[}}[[}[}[[}[[}[}}]''''''')'')'''))]}[]]'''",
"'']')''''''')''''''''')''''''''''''''''''''''')''''')']''''')'']'''''''''''''']''''']'['",
"'']']'']]''']']'''''']'''']]]'''']']'']]]'''']'']''']'''']'']''''''']'''']'''''']'''''''",
"]]']'']]''''''''''']'']]]]']'''''']']'']]]]'''']'''''']]]''''']']'''']]]''''''[]']]'']]'"
};

/* XPM */
static const char *const xpm_icon_2[] = {
/* columns rows colors chars-per-pixel */
"48 48 81 1 ",
"  c #0C0C0C",
". c #141414",
"X c #1B1B1B",
"o c #242424",
"O c #2D2D2D",
"+ c #333333",
"@ c #3C3C3C",
"# c gray26",
"$ c #4B4B4B",
"% c #535353",
"& c #5D5D5D",
"* c #646464",
"= c #6C6C6C",
"- c #747474",
"; c #7A7A7A",
": c #0A8A0A",
"> c #118F11",
", c #199119",
"< c #269526",
"1 c #2C992C",
"2 c #349C34",
"3 c #3A9D3A",
"4 c #3BA03B",
"5 c #44A244",
"6 c #4AA44A",
"7 c #4DA94D",
"8 c #52A552",
"9 c #51AA51",
"0 c #58AD58",
"q c #65AB65",
"w c #6CAD6C",
"e c #6CB56C",
"r c #73AF73",
"t c #75B075",
"y c #76B876",
"u c #7BB27B",
"i c #7FBD7F",
"p c #848484",
"a c gray54",
"s c #949494",
"d c #9A9A9A",
"f c #84B584",
"g c #86BE86",
"h c #88B788",
"j c #8DB98D",
"k c #90BA90",
"l c #9FBF9F",
"z c #A4A4A4",
"x c #ABABAB",
"c c #B4B4B4",
"v c #BCBCBC",
"b c #95C595",
"n c #9BC89B",
"m c #A5C1A5",
"M c #A3CAA3",
"N c #ABC2AB",
"B c #AECFAE",
"V c #B5C6B5",
"C c #BAC7BA",
"Z c #BAC8BA",
"A c #B3D1B3",
"S c #C3C3C3",
"D c #C7CCC7",
"F c #CCCCCC",
"G c #CFD1CF",
"H c #D2CED2",
"J c #D4D4D4",
"K c #D7D8D7",
"L c #DAD2DA",
"P c #DADADA",
"I c #DAE1DA",
"U c #E6DDE6",
"Y c #E5E5E5",
"T c #E7E8E7",
"R c #EAE7EA",
"E c #ECECEC",
"W c #EFF0EF",
"Q c #F1EDF1",
"! c #F3F3F3",
"~ c #FDF6FD",
"^ c #FAFAFA",
/* pixels */
"YYTYTTYTYTYYTYYYYYTYYYTYTYYYYTTYYYYTTYTYYTYTYTTY",
"YYYYYYTYYYTYTYYYYTTTTYYYYYYYYYYYYYYYYYYYYYYYTYYT",
"TTYYEYYYYYYYYYYYYYYYYYYTTYYYYYYYYEYYYYYYYYYYYYTY",
"YYTYHEEEEEEEETTQEEEEEEEGYEEEEEEEYJEEQQWEE!TYTYTY",
"YYESoxzzzzzzxapxzzzzzzxOX++OO+O+o @++++++@o-!YYY",
"TYESOPPPPJJPYcxYJPPPPJUsxvcccccvdozzzdzzzc$*!YYY",
"YYES+ETTY^ETESv!TTTRTYQxY!!!~~!^DOPPPYYPJE==^YYY",
"YYES+TYYYpFTEvc!YYYYYYEzJTYKgMYEvOJFH;pHSY*=^YYY",
"TYESOTYQs cEEvvEYYTYTYQzPTQ03MTQSOJFJ=+JFP*=^YTY",
"YYES+TEv%#s!ESc!YTYTYYEzJTR1e6I!vOJDPv#PDY**^YYT",
"YYQS+YEv=X-EEvvEYYYYYYEzPTQe97YEvOJFH*.dJU*=^UYT",
"YYES+TYE^FYYEScQYYYYYYEzJTTTBITEvOJFDzdcFP*=^ITY",
"YYES+TTYYETY!Sv!YTTTTYQxPETYQTT!S+PPJYYUJE==^YYY",
"YYQS+PPPPPPPYcxYPPPPPPYdFPPPPPPYcoxzzzzzzc$=!YYY",
"YYESozzzzzzzxppxzzzzzzx-dxzzzzzzso++++++++X-!YYT",
"TYES+EEETETE!Sv^TEEEEE!xPEEEEEEEYx!TEEEEE^SC!YYY",
"YYES+YYYTEYYEvcEYYYYYYTzPTYRYYYYPzTYYYYYYEvvWYYT",
"TYESOYYEF+vE!vv!YYYYYYEzPYQA0bTTPzEYYYYYYEvvEYYY",
"TYESOTYTpoc!TScEYYYYYYEzJTE35nRTPzTYYYYYYEvvWYYT",
"YYES+T!x@O-!EvvQYTYTYY!zPTR2y2PRPzEYYYYTYEvvQYTY",
"YYESOTTJc$dEEScEYYYTYY!zPTEM7gYTPzTYYYTTYEvvWYYT",
"YYESOTYYETTUTvvEUYYYYYEzJYYEYTYYPzTYYYYYUEvcEYYY",
"YYQS+^^^^^^^^JS^EEEEEE!xU!EEWEW!Yx^^^^~^^^FvWYYY",
"YYEDX-======-&pSvvvvvvSpxvvvvvvvc%-======-&s!YYY",
"YYED.&&*&&&&=O&DcvvvvvSacvvvvvvSz.*&&&&&&=o*!UYT",
"YYQS+YUYTYYU!-=^EWWEQE!xY!QE^!E!S+YYYTTYP^-=^YYT",
"YYESOFDDxcFDP**^YYYYYYEzJTYTvSYEvOJFDxcDDP**^YTY",
"TYESOJFH%+HFY**^YYYYYYEzJT!p@dTWvOJFH%+JDY**^YYT",
"YY!SOGFJv#JDY=*^PYYTYYEzPTTO%-Y!vOJFPc#PFU**^YYY",
"YYESOFFJaocHP*=^YYYYYYEzJY!$=+J!vOJFJpocFY*=!YYY",
"YYESOJJF;&sJY**^YYYYYYExPYTF-cTESOJFF;&sGU*=^YYY",
"YYEvOJFFPPJDY**^PYYYYYEzJTYT^EYQvOJFFPYJDI*=^UTT",
"TYESOJJJJHJJY==^REQEEE^xP!EETET^SOPHJJJJHT==^PTY",
"YYED O+OOOOO+..@+++++++oO+++++++O OOOOOOO+ #WYYT",
"YYQSoxxzzzzxxaaxzzzzzzx-dxzzzzzxaoxzzzzxzxadEYYT",
"TYESOPJPPUPJYcxYJPPUPJUdDPPKYYJYcOPPPUUPJYcxQYYY",
"YYWSOFFHDrVHJxzJDLluFFJsSFFPpsJJxOJFDurCFJxx!YYY",
"YYESOJFLf:lLJxzKHH6<JFPsSJJc.*PJxOJFDk<fLJxxEYYY",
"YYESOGJl53fJKxzJLr62CHJsSJF%$%JJxOHDLV1fLJxxWYYT",
"TYQSOFHVq,wJKxzKHj8>mHJsvJS-++DPxOJHVw2uLJxxEYYY",
"YYQSoHDHLCDFJxzJDLLCHFJsSJFUDCFJxOJFFlNJFPzxEYYY",
"YYES+PPJJUPJUcxPHFFPJHPdDPJHPPJUc+JJHPLHGPxc!YYY",
"YYQSozzzzzzzxpsFSSSSSvDpdzzzzzzxpoSSSSSSSFdsEYYY",
"YYED +++O+OO+.$zssssssdoo++OOO++oodsssssaz$@!YYY",
"TYTYHEEEETEEEPPETREEETEJYETEEERETJTTREETTQPPTYTY",
"YTYYTYYYYYYYYTTYYYYYYYYRYYYYYYYYYEYTYYYYYYTTYTYT",
"TYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYTYTY",
"TYTYTYTYTTTYTTYTTYTYTYYTYTYTTYTYYYTYTYYTYTYTYYTT"
};

/* XPM */
static const char *const xpm_icon_3[] = {
/* columns rows colors chars-per-pixel */
"44 44 75 1 ",
"  c gray5",
". c #131313",
"X c #1C1C1C",
"o c #252525",
"O c #2B2B2B",
"+ c #353535",
"@ c #3C3C3C",
"# c #444444",
"$ c #4A4A4A",
"% c #535353",
"& c #5C5C5C",
"* c #646464",
"= c #6D6D6D",
"- c #737373",
"; c #7D7D7D",
": c #1D911D",
"> c #2A972A",
", c #2D982D",
"< c #329C32",
"1 c #3D9E3D",
"2 c #419F41",
"3 c #41A341",
"4 c #4AA44A",
"5 c #4EA94E",
"6 c #52A552",
"7 c #59AC59",
"8 c #61AA61",
"9 c #6EAE6E",
"0 c #6DB66D",
"q c #72AF72",
"w c #74B074",
"e c #76B976",
"r c #7AB27A",
"t c #78B978",
"y c #828282",
"u c #8C8C8C",
"i c #949494",
"p c #9C9C9C",
"a c #8FB98F",
"s c #95BB95",
"d c #A5A5A5",
"f c #AAAAAA",
"g c #A1BFA1",
"h c #B4B4B4",
"j c #BBBCBB",
"k c #98C598",
"l c #9EC89E",
"z c #A5C0A5",
"x c #ADC3AD",
"c c #ACCEAC",
"v c #B3C5B3",
"b c #B9C7B9",
"n c #B3D1B3",
"m c #C0BEC0",
"M c #C4C4C4",
"N c #CBCBCB",
"B c #C2D7C2",
"V c #C7D8C7",
"C c #CDD0CD",
"Z c #CBDBCB",
"A c #D2CED2",
"S c #D4D4D4",
"D c #D6DCD6",
"F c #DAD4DA",
"G c #DCDCDC",
"H c #D4E0D4",
"J c #DEE1DE",
"K c #E2DBE2",
"L c #E5E5E5",
"P c #EAE6EA",
"I c #EBEBEB",
"U c #F4EDF4",
"Y c #F4F3F4",
"T c #FCF5FC",
"R c #FAFAFA",
/* pixels */
"LLLPLILLLPLLLLLLPLLILLLLLPLLLLLIPLLLPLLLLLLL",
"LLLLLLLLLLLILLLLLLLLLLLLLLLLLLLLLLLLLLLLPLLP",
"PLLPILLLLLLLIPLLLLLLLYIIIIPIPIIIPIPPPPPPLLIL",
"LLPDMILLLLLLDJLLLLLLLjSSSSSSDNMDDGDFDGDGILLL",
"LLYf@hdddfdhyifdfdddf+O@++++@O.@+++++@XyYLPL",
"LLYd%RLLLLLIjNILLLLLIdDLJKLGLh@SmNNNmF*;RJLL",
"LLYd$RJLILLIhNILLLLLIfLLIPHLYj@GANmAmP*;RLLL",
"LLYd%RLI@yYPjMILILLLIdJLJ7tGYh@DFfOfFK*;RJLL",
"LLYd%YIi@;YPhNILLLLLIdKTl>0VYj@DNK%dDL*;RLLI",
"LLYd$RL-+$IIhNULPLLLIdKUn43cTh@GCmO-SG*;RLLL",
"LJYd%YJYMbIIhNILLLLLPfKKPccPIh#FNhyuNG*wRJLL",
"LLYd%RPPUYIYjNYIIIPPYfPUIYYPRj$PDLIPFY=yRLPL",
"LLYd$GNNNNNSdhSNCNCNmpmmNNNNSdOiuuyuup@;YJLL",
"LLYf@bhhhhhjuphhhhhhhwhmhhhhhd#&%&&%%&#iYLLL",
"LLYd%RIIYYIRbAYIIYIIYhPIIYYYILjRYYRYRRNNILLL",
"LLYd%YKIjMPIhNILLLLLPdJLPVcJPSfILJLLJIjMILLP",
"LLYd$RLKowRIhNILLPLLIdJIZ<tLIDfILLLLLYmMILPL",
"LLYd%YI-@=IIhNILLLLLIfJYk17nUShILLLLLIjmILLL",
"LLYd%YLp#%PIjNILLLLLPdGPV75BUSfILLPLLIbMILPL",
"LLRd$YGYKKLPhMILLLLLPfGLPDDPLDfLGLLLJPjmYLLL",
"LLYd&RYYTTTRNAYIIYIYYhLYIYYIYGjRRRRRRRNMILLL",
"LLYfX*&*&&&*$ujhhhhhhyhjhhhhjd$*&&&&&*$pYLLL",
"LLYfOiyyyyyi+yDNNNNNCiMCCNMMSdOuyyyyyi@;YLLL",
"LLYd$YGLIKDU*iRLIIIIYfLIPRRPRj#IGLIKDY=yRLLL",
"LLYd$DSd&mNG%uYLLLLLPfGLLpuFYh@SAf&jNG*yRLLL",
"LLYd$DNm+fSL%iRGLLLLPfGYho;DYh#GNN@pSK*;RLLI",
"LLYd$GNS#dSL&uYLLILLIdGRp#$dRh@DNF$iDG*;RJLL",
"LLYd$DSd@-NG&uRLLLLLPfGPD;-SYh#FSf@=NL*yRJLL",
"LLYd$KNSDSNL&uYLLLLLIdLLIIYPYj@GNAFAmK*wRLLL",
"LLYd#GNNNNNK&uYLLLLLPdGPLJKLIh@DNNNNAF*;RJLL",
"LLYh ++++++@Xo@+@@++@O+@@+++@O.++++++@.*YLLL",
"LLYd#NjjjjjMpdMjjjjbmuhbjjjjNi@NmmmmmmphILLP",
"LLYd$KNSFSSDdhGSSFSSFpNSSDFSGd#KSSNFADfjILPL",
"LLYd$GNF2rFSdhSAb>xACiNNGy@SDp@DAg49SSfhULLL",
"LLYd$GAa<qFSdhSN9,gFSiNSj$@NFd@GNA76FSfjILLL",
"LLYd$DA8>1AFdhGb2>qFSiMGu@XfKd#DAx61ASfhILLP",
"LLYd$DNAzgNSdhSNAsbASpNNNMuNFd@DAgrvNDfhILLL",
"LLYd$IFGKKSLfjFSAKSASpSDGGLDLf#GSFKFAGfjILIL",
"LLYf+dpppppd;dMjjbjjM;ipppppd-@NjjjjjNipYLIL",
"LLIjo$$####$o-fppdppd+@$####$+#fppdppf%*YLLL",
"LLLLLYYRYYYYPLIIIIIIILYYYYYYYYLIIIIIIIILLLIL",
"LLLILJLLLLLLLLLLLLLLLLLLJLLLLLLLLLLLLLLLLLLL",
"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL",
"LILPLLLLLLLLLLILLILLILLLLLLLLLLLILLILLLLLLIL"
};

/* XPM */
static const char *const xpm_icon_4[] = {
/* columns rows colors chars-per-pixel */
"32 32 68 1 ",
"  c gray14",
". c #2B2B2B",
"X c gray21",
"o c #3C3C3C",
"O c #444444",
"+ c #4C4C4C",
"@ c #545454",
"# c #575857",
"$ c #5B5B5B",
"% c #636363",
"& c #6C6C6C",
"* c #757575",
"= c #7C7C7C",
"- c #2B962B",
"; c #2A982A",
": c #319931",
"> c #43A043",
", c #54AB54",
"< c #59A659",
"1 c #5AAA5A",
"2 c #64AB64",
"3 c #6AAC6A",
"4 c #60B060",
"5 c #73AF73",
"6 c #76B976",
"7 c #79B179",
"8 c #7DBB7D",
"9 c #838383",
"0 c #8D8D8D",
"q c #949494",
"w c #9B9B9B",
"e c #81BC81",
"r c #8EB78E",
"t c #95BC95",
"y c #9CBD9C",
"u c #A4A4A4",
"i c #ACACAC",
"p c #B5B5B5",
"a c #B7B8B7",
"s c #BCBCBC",
"d c #96C596",
"f c #98C098",
"g c #A2C3A2",
"h c #A6CCA6",
"j c #A8C3A8",
"k c #B4C6B4",
"l c #BDC2BD",
"z c #BACABA",
"x c #C3BDC3",
"c c #C3C4C3",
"v c #C5CDC5",
"b c #C8C7C8",
"n c #CBCCCB",
"m c #CCD1CC",
"M c #D3CDD3",
"N c #D4D3D4",
"B c #D3DED3",
"V c #DBD6DB",
"C c #DBDBDB",
"Z c #DBE3DB",
"A c #E2DCE2",
"S c #E4E4E4",
"D c #E7EAE7",
"F c #E9E7E9",
"G c #EBEBEB",
"H c #F2EEF2",
"J c #F3F3F3",
"K c #FCFCFC",
/* pixels */
"SFFSFSSDSFDSSFSGGGFGFFGFFFFFGSSF",
"FZNSSSSSCCSSSSSnNNNNNNmCBCNCCZSS",
"Ja#cpppawusppps%+$##$# ##@##o*JS",
"Hp&KSJGGnmGFSSHsSGJGFC#NMCNCw*KS",
"Jp*JG0aJcnFSSSFaCGhdGC#Nn*iSq*JS",
"Jp&KaXwKsnGSFSGaAS>4ZC#MC&wSw*JS",
"Jp&Kp@9KcnFDSSFaCF6,ZC@mn#*Sq*KS",
"Jp&KGGFJnmJFGFJaSGDSJC#CNnnFu*JS",
"Gp%SnNNCpsCNNnCinNNNNnOqwwwu&*JS",
"Ja$nssscuucsclcqpsscss&*****%qJS",
"Jp*KGJGJnNJFGGJsSJHDGFxKJJKKScGS",
"Jp&JG%iJlnFSSSFaCG8eFSpSSSSSNsGS",
"Jp&Ki qKcnGSDSGaCS>,BFaFSSSGNxGS",
"Jp&Jn*wJsnFSSSFpCFd6AApSSSSDnsGS",
"Jp*KKKKKNNJGGFJlSGHHHAxHJJJKScGD",
"Gso0*==9&ucccxbwaccxxx*==7=9&wHS",
"HsOwqwqw@qCnmmNinNNNNcO00wqw%*JS",
"Jp&GnsNG=wKFGFHsSGSnJC$SCsNFu*JS",
"Ha%Cs+aS*wJSSSFaCF#*FN#NN#wSw*JS",
"Ha%Cn@uS*wJSSSGpCS++NC@nC%9Sq*JS",
"Ha%Za*uS*wJSSSFaCGpwFC#Mn90Cw*KS",
"Jp%SNSVS=wKFJGJsSHJKJZ#CNSCSw*JS",
"Gc.$#@##oO%$$$%+#%##$# ##@@#o%JS",
"Ja#npxssuucaxasqpascsi+saxxluiGS",
"Jp%SVyzApsCNymVunCcwCc#NntkVspGS",
"Jp%Sk:rAipCt-zVucN*OBx@mN3<AapGS",
"Ja%At:5AiaV7-yCubn#Xcc@Mn21VapGS",
"Ga%SNvbCpaNNznNinNNsVb#NnjvNspJS",
"Js#nassxwpncnbmwpsassi@nnMbnpiGS",
"Gco$###$O9puuup$+####@+iuuup9&JS",
"SSFGGGGGFDGFFFFSGGGGGGDGFFGGSSSS",
"SFSSFSSSSSSFSSSFSSSFSSSSSSSSSDSF"
};

/* XPM */
static const char *const xpm_icon_5[] = {
/* columns rows colors chars-per-pixel */
"16 16 175 2 ",
"   c #E2E2E2",
".  c #DADADA",
"X  c #DDDDDD",
"o  c gray86",
"O  c #DFDFDF",
"+  c #D5D5D5",
"@  c #C8C8C8",
"#  c #CACBCA",
"$  c #CACACA",
"%  c #CDCDCD",
"&  c #CECECE",
"*  c gray80",
"=  c #D7D7D7",
"-  c #E7E7E7",
";  c gray77",
":  c #A5A5A5",
">  c #E1E1E1",
",  c #D2D2D2",
"<  c #BCBCBC",
"1  c #D0D0D0",
"2  c gray84",
"3  c #B4B4B4",
"4  c gray62",
"5  c #B4B0B4",
"6  c #999899",
"7  c gray46",
"8  c #A2A1A2",
"9  c gray60",
"0  c gray52",
"q  c gray90",
"w  c gray75",
"e  c gray74",
"r  c #A2A2A2",
"t  c #BBBBBB",
"y  c gray85",
"u  c #EBECEB",
"i  c #D9D8D9",
"p  c #DDE2DD",
"a  c #8FCE8F",
"s  c #CDD2CD",
"d  c #AAA9AA",
"f  c #ABACAB",
"g  c #B7B7B7",
"h  c gray63",
"j  c #C0C0C0",
"k  c #B9B9B9",
"l  c #C6C6C6",
"z  c gray83",
"x  c #E9EAE9",
"c  c LightGray",
"v  c #D6D9D6",
"b  c #A8D1A8",
"n  c #C5CAC5",
"m  c #B2B2B2",
"M  c #B1B1B1",
"N  c gray61",
"B  c gray88",
"V  c #C3C3C3",
"C  c gray91",
"Z  c #B6B6B6",
"A  c gray82",
"S  c #C6C5C6",
"D  c #E7DBE7",
"F  c #C2C1C2",
"G  c #7C7D7C",
"H  c #9D9D9D",
"J  c #959595",
"K  c #888888",
"L  c #E6E6E6",
"P  c gray81",
"I  c #D1D0D1",
"U  c #D6D8D6",
"Y  c #AFD1AF",
"T  c #D7DAD7",
"R  c #E4E4E4",
"E  c gray76",
"W  c #9F9F9F",
"Q  c gray",
"!  c gray93",
"~  c #D8D7D8",
"^  c #D7DCD7",
"/  c #7CC07C",
"(  c #D4DCD4",
")  c #DDDBDD",
"_  c #F3F3F3",
"`  c gray95",
"'  c gray89",
"]  c #8D8D8D",
"[  c #ACACAC",
"{  c #D8D8D8",
"}  c #CDCCCD",
"|  c #E0DDE0",
" . c #CECDCE",
".. c gray65",
"X. c gray70",
"o. c gray68",
"O. c gray53",
"+. c gray66",
"@. c gray64",
"#. c #868686",
"$. c #CECFCE",
"%. c #838383",
"&. c #A4A4A4",
"*. c #ECECEC",
"=. c #EEEEEE",
"-. c #787978",
";. c #AFAFAF",
":. c #A7A7A7",
">. c #9A999A",
",. c #B1B2B1",
"<. c #AEAEAE",
"1. c #909090",
"2. c #DADBDA",
"3. c gray78",
"4. c gray58",
"5. c #B3B4B3",
"6. c #AEAFAE",
"7. c #929292",
"8. c #737473",
"9. c #A49FA4",
"0. c #969496",
"q. c #7A7B7A",
"w. c #9A989A",
"e. c #9F9A9F",
"r. c #888988",
"t. c gray67",
"y. c #898889",
"u. c #696A69",
"i. c #9F9D9F",
"p. c #969396",
"a. c #8A8B8A",
"s. c #C1C2C1",
"d. c #ADA7AD",
"f. c #9DC79D",
"g. c #AFC6AF",
"h. c #CDC4CD",
"j. c #B6CAB6",
"k. c #95C195",
"l. c #CAC5CA",
"z. c #C8C9C8",
"x. c #8E8E8E",
"c. c #B2B3B2",
"v. c #A7A1A7",
"b. c #ACCCAC",
"n. c #A7C4A7",
"m. c #CCC6CC",
"M. c #E2E3E2",
"N. c #AAA6AA",
"B. c #A0C8A0",
"V. c #B0C6B0",
"C. c #C8C0C8",
"Z. c #AFC4AF",
"A. c #94BD94",
"S. c #C6C2C6",
"D. c #C6C7C6",
"F. c #A19DA1",
"G. c #ABC8AB",
"H. c #A7C0A7",
"J. c #C7C2C7",
"K. c #E3E4E3",
"L. c gray79",
"P. c gray49",
"I. c #A49DA4",
"U. c #929392",
"Y. c #C4C1C4",
"T. c #CAC4CA",
"R. c #A2A3A2",
"E. c #8C8D8C",
"W. c #C9C6C9",
"Q. c #C1BDC1",
"!. c #D5D6D5",
"~. c #DFE0DF",
"^. c gainsboro",
"/. c gray87",
"(. c white",
/* pixels */
"  . X X o X O + @ # $ % & * = - ",
"; : > , < 1 2 3 4 5 6 7 8 9 0 q ",
"w e r t y - u i p a s d f g h O ",
"j g k l z q x c v b n 8 m M N B ",
"V 4 C z Z & A < S D F G H J K L ",
"j 3 V @ P   L I U Y T P > O % R ",
"w E W Q O - ! ~ ^ / ( ) _ ` + ' ",
"; ] V m [ = { V } |  ...k X.o.L ",
"; O.+.@.#.o o l $.2 ; %.+...O.' ",
"j m h g &.*.=.. = -.l ;.:.m : O ",
"E >.,.<.1.y 2.3.& j Q 4.5.6.7.> ",
"S 8.9.0.q.w.e.r.1.t.y.u.i.p.a.q ",
"s.d.f.g.h.j.k.l.z.x.c.v.b.n.m.M.",
"s.N.B.V.C.Z.A.S.D.4.c.F.G.H.J.K.",
"L.P.I.p.U.Y.T.R.] ..O.E.W.Q.:   ",
"q y !.!.y B ~.^.2 + = /.B ~.^.q "
};

const char *const *const xpm_icons[] = {
    xpm_icon_0,
    xpm_icon_1,
    xpm_icon_2,
    xpm_icon_3,
    xpm_icon_4,
    xpm_icon_5,
};
const int n_xpm_icons = 6;
