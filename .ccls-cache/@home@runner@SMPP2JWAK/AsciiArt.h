#ifndef ASCIIART_H
#define ASCIIART_H

#include <iostream>
using namespace std;

void display_raphael() {
  cout << "\033[2J\033[0;0H";
  cout << "\033[0;32m"
       << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣤⣤⣄⡀⠀⠀⠀⠀⢠⣤⣄⠀⣀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⣠⣴⠟⠛⠉⠁⠀⠀⠈⠉⠛⠻⣦⣄⠀⢸⡟⠙⣿⡟⣷⡀" << endl;
  cout << "⠀⠀⠀⠀⠀⢠⣾⠏⣀⣀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡈⠻⣷⣼⣧⠀⢹⡇⣹⡇" << endl;
  cout << "\033[0;31m"
       << "⠀⠀⠀⣰⡿⠟⠛⢛⣛⣛⡿⢶⣶⣶⡶⢿⣛⣛⡛⠛⠿⢿⣿⣷⣿⣣⡿⠁" << endl;
  cout << "⠀⠀⠀⣿⠁⢀⣼⠟⣯⣝⣻⣦⣤⣤⣾⣟⣫⣭⠻⣷⡄⠈⣿⣨⣿⠋⠀⠀" << endl;
  cout << "⠀⠀⣠⡾⠻⢷⣬⣛⣿⡿⠟⠋⠁⠀⠀⠈⠉⠛⢿⣿⣋⣵⡾⠛⢿⣅⠀⠀⠀" << endl;
  cout << "\033[0;32m"
       << "⠀⣼⠟⠀⠀⠀⠉⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⠁⠀⠀⠀⠻⣧⠀⠀" << endl;
  cout << "⠰⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆⠀" << endl;
  cout << "⠀⢻⣦⠀⠀⠀⠀⠀⢴⣤⣤⣀⣀⠀⠀⣀⣠⣤⡾⢿⡆⠀⠀⠀⠀⣴⡟⠀⠀" << endl;
  cout << "⠀⠀⠙⢷⣤⣀⠀⠀⠀⠈⠉⠙⠛⠛⠛⠛⠉⠁⠀  ⠀⣀⣤⡾⠋⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠈⠛⠷⢶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡶⠟⠋⠁⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⠈⠛⢷⣤⣀⡀⠀⠀⢀⣠⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀     ⠛⠛⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}

void display_donatello() {
  cout << "\033[2J\033[0;0H";
  cout << "\[\033[0;32m"
       << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣤⣤⣄⡀⠀⠀⠀⠀⢠⣤⣄⠀⣀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⣠⣴⠟⠛⠉⠁⠀⠀⠈⠉⠛⠻⣦⣄⠀⢸⡟⠙⣿⡟⣷⡀" << endl;
  cout << "⠀⠀⠀⠀⠀⢠⣾⠏⠁⣀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡈⠻⣷⣼⣧⠀⢹⡇⣹⡇" << endl;
  cout << "\[\033[0;35m"
       << "⠀⠀⠀⣰⡿⠟⠛⢛⣛⣛⡿⢶⣶⣶⡶⢿⣛⣛⡛⠛⠿⢿⣿⣷⣿⣣⡿⠁" << endl;
  cout << "⠀⠀⠀⣿⠁⢀⣼⠟⣯⣝⣻⣦⣤⣤⣾⣟⣫⣭⠻⣷⡄⠈⣿⣨⣿⠋⠀⠀" << endl;
  cout << "⠀⠀⣠⡾⠻⢷⣬⣛⣿⡿⠟⠋⠁⠀⠀⠈⠉⠛⢿⣿⣋⣵⡾⠛⢿⣅⠀⠀⠀" << endl;
  cout << "\[\033[0;32m"
       << "⠀⣼⠟⠀⠀⠀⠉⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⠁⠀⠀⠀⠻⣧⠀⠀" << endl;
  cout << "⠰⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆⠀" << endl;
  cout << "⠀⢻⣦⠀⠀⠀⠀⠀⢴⣤⣤⣀⣀⠀⠀⣀⣠⣤⡾⢿⡆⠀⠀⠀⠀⣴⡟⠀⠀" << endl;
  cout << "⠀⠀⠙⢷⣤⣀⠀⠀⠀⠈⠉⠙⠛⠛⠛⠛⠉⠁⠀⠈⠁⠀⣀⣤⡾⠋⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠈⠛⠷⢶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡶⠟⠋⠁⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⠈⠛⢷⣤⣀⡀⠀⠀⢀⣠⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀     ⠛⠛⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}

void display_michelangelo() {
  cout << "\033[2J\033[0;0H";
  cout << "\[\033[0;32m"
       << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣤⣤⣄⡀⠀⠀⠀⠀⢠⣤⣄⠀⣀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⣠⣴⠟⠛⠉⠁⠀⠀⠈⠉⠛⠻⣦⣄⠀⢸⡟⠙⣿⡟⣷⡀" << endl;
  cout << "⠀⠀⠀⠀⠀⢠⣾⠏⠁⣀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡈⠻⣷⣼⣧⠀⢹⡇⣹⡇" << endl;
  cout << "\[\033[0;33m"
       << "⠀⠀⠀⣰⡿⠟⠛⢛⣛⣛⡿⢶⣶⣶⡶⢿⣛⣛⡛⠛⠿⢿⣿⣷⣿⣣⡿⠁" << endl;
  cout << "⠀⠀⠀⣿⠁⢀⣼⠟⣯⣝⣻⣦⣤⣤⣾⣟⣫⣭⠻⣷⡄⠈⣿⣨⣿⠋⠀⠀" << endl;
  cout << "⠀⠀⣠⡾⠻⢷⣬⣛⣿⡿⠟⠋⠁⠀⠀⠈⠉⠛⢿⣿⣋⣵⡾⠛⢿⣅⠀⠀⠀" << endl;
  cout << "\[\033[0;32m"
       << "⠀⣼⠟⠀⠀⠀⠉⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⠁⠀⠀⠀⠻⣧⠀⠀" << endl;
  cout << "⠰⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆⠀" << endl;
  cout << "⠀⢻⣦⠀⠀⠀⠀⠀⢴⣤⣤⣀⣀⠀⠀⣀⣠⣤⡾⢿⡆⠀⠀⠀⠀⣴⡟⠀⠀" << endl;
  cout << "⠀⠀⠙⢷⣤⣀⠀⠀⠀⠈⠉⠙⠛⠛⠛⠛⠉⠁⠀⠈⠁⠀⣀⣤⡾⠋⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠈⠛⠷⢶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡶⠟⠋⠁⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⠈⠛⢷⣤⣀⡀⠀⠀⢀⣠⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀     ⠛⠛⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}

void afficher_leonardo() {
  cout << "\033[2J\033[0;0H";
  cout << "\[\033[0;32m"
       << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣤⣤⣄⡀⠀⠀⠀⠀⢠⣤⣄⠀⣀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⣠⣴⠟⠛⠉⠁⠀⠀⠈⠉⠛⠻⣦⣄⠀⢸⡟⠙⣿⡟⣷⡀" << endl;
  cout << "⠀⠀⠀⠀⠀⢠⣾⠏⠁⣀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡈⠻⣷⣼⣧⠀⢹⡇⣹⡇" << endl;
  cout << "\[\033[0;34m"
       << "⠀⠀⠀⣰⡿⠟⠛⢛⣛⣛⡿⢶⣶⣶⡶⢿⣛⣛⡛⠛⠿⢿⣿⣷⣿⣣⡿⠁" << endl;
  cout << "⠀⠀⠀⣿⠁⢀⣼⠟⣯⣝⣻⣦⣤⣤⣾⣟⣫⣭⠻⣷⡄⠈⣿⣨⣿⠋⠀⠀" << endl;
  cout << "⠀⠀⣠⡾⠻⢷⣬⣛⣿⡿⠟⠋⠁⠀⠀⠈⠉⠛⢿⣿⣋⣵⡾⠛⢿⣅⠀⠀⠀" << endl;
  cout << "\[\033[0;32m"
       << "⠀⣼⠟⠀⠀⠀⠉⠿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⠁⠀⠀⠀⠻⣧⠀⠀" << endl;
  cout << "⠰⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠆⠀" << endl;
  cout << "⠀⢻⣦⠀⠀⠀⠀⠀⢴⣤⣤⣀⣀⠀⠀⣀⣠⣤⡾⢿⡆⠀⠀⠀⠀⣴⡟⠀⠀" << endl;
  cout << "⠀⠀⠙⢷⣤⣀⠀⠀⠀⠈⠉⠙⠛⠛⠛⠛⠉⠁⠀⠈⠁⠀⣀⣤⡾⠋⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠈⠛⠷⢶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡶⠟⠋⠁⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀⠈⠛⢷⣤⣀⡀⠀⠀⢀⣠⣴⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
  cout << "⠀⠀⠀⠀⠀⠀⠀     ⠛⠛⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}

void display_shredder() {
  cout << "                    .;iiiiii;;." << endl;
  cout << "                  ;i!!!!!!!!!!!!!!!i." << endl;
  cout << "               .i!!!!!!!!!'`.......`''=" << endl;
  cout << "              i!!!!!!!!' .:::::::::::::.." << endl;
  cout << "             i!!!!!!!!' :::::::::::::::::::." << endl;
  cout << "          ' i!!!!!!!!' :::::::::::::::::::::::." << endl;
  cout << "         :  !!!!!!!!! ::::::::::::::::::::::::::." << endl;
  cout << "        ::  !!!!!!!! ::::::::::::::::::::::::::::::" << endl;
  cout << "       ::: <!!!!!!!! ::::::::::::::::::::::::::::::: i!!!!>" << endl;
  cout << "      .::: <!!!!!!!> ::::::::::::::::::::::::::::'` i!!!!!'" << endl;
  cout << "      :::: <!!!!!!!> ::::::::::::::::::::::::'`  ,i!!!!!!'" << endl;
  cout << "      :::: `!!!!!!!> :::::::::::::::::::''`  ,i!!!!!!!!'.." << endl;
  cout << "     `::::  !!!!!!!!.`::::::::::::::'` .,;i!!!!!!!!!!' ::::."
       << endl;
  cout << "      ::::  !!!!!!!!!, `''''```  .,;ii!!!!!!!!!!!'' .::::::::"
       << endl;
  cout << "  i!; `::' .!!!!!!!!!!!i;,;i!!!!!!!!!!!!!!!!!!' .::::::::::::::"
       << endl;
  cout << " i!!!!i;,;i!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!''`  ::::::::::::::::::"
       << endl;
  cout << " !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!'`..euJB$. ::::::::::::::::' ::."
       << endl;
  cout
      << "  !!!!!!!!!!!!!!!!!!!!!!!!!!!''`,   $$$$$$$$$Fc :::::::::::::: .:::::"
      << endl;
  cout
      << "    `''''''''''''''''` ..z e$$$F   d$P  !!<<3c :::::::::::  ::::::::."
      << endl;
  cout << "       :::: ?Fx$b.  ?$ $$$b($$    dF   'ud$$$$$$c `:::::::' "
          ".:::::::::::"
       << endl;
  cout << "       `:::  $$$$$r-.  P9$$$?$bedE' .,d$$$$$$$P    `::::' "
          ".:::::::::::::"
       << endl;
  cout << "        :::: `? =       "
          ""
          "   "
          "?????????"
          "  .~~~.  :'.:::::::::::::::' ;"
       << endl;
  cout << "        :::::  $$$eeed .~~~~~~~~~~~~~~~~~~~~~~~~~~~  "
          "::::::::::::::::' i!"
       << endl;
  cout << "        :::::  $$$PF  .~~.$.~~~~~~~~~~~~~~~~~~~~~~~~.  "
          ":::::::::::::' ,!!!"
       << endl;
  cout << "         ::       .~~~~~~ ?$ ~~~~~~~~~~~~~~~~~~~~~~~~.  ::::::::::' "
          " ;!!!!"
       << endl;
  cout << "          ::  ~~~~~~~~~~~.`$b ~~~~~~~~~~~~~~~~~~~~~~~~. `:::::::'  "
          ";!!!!!'"
       << endl;
  cout << "         `:::  ~~~~~~~~~~~ `$L ~~~~~~~~~~~~~~~~~~~~~~~ .  `''`   "
          ";!!!!!!"
       << endl;
  cout << "          ::::  ~~~~~~~~~~~ `$c'~~~~~~~~~~~~~~~~~~~~~ ~~ ,iiii! "
          "i!!!!!!  !"
       << endl;
  cout << "          :::::  ~~~~~~~~~~~  $c`~~~~~~~~~~~~~~~~~~~ ~~ ;!!!!' "
          "i!!!!!!  i!"
       << endl;
  cout << "          `:::::  ~~~~~~~~~~~ `$.`~~~~~~~~~~~~~~~~  ~  <!!!!' "
          ";!!!!!!'  !!"
       << endl;
  cout << "           :::'`   `~~~~~~~~~~  $.`~~~~~~~~~~~~~~ .~ .!!!!!' "
          ";!!!!!!!  i!!"
       << endl;
  cout << "              ,i!    ~~~~~~~~~~  $r'~~~~~~~~~~~~ '  ;!!!!!  "
          ";!!!!!!!!  !!!"
       << endl;
  cout << "             !!!!i !i. `~~~~~~~~ `$c ~~~~~~~~~~~~  <!!!!'  "
          "i!!!!!!!!!  !!!"
       << endl;
  cout << "             :!!!!> !!!;  ~~~~~~~.  $. ~~~~~~~~ .;!!!!'  "
          ";!!!!!!!';!!  `!!"
       << endl;
  cout << "             `!!!!! `!!!!;.  ~~~~~~~~~~~~~~  .;i!!!!' .i!!!!!!' "
          ",!!!!i  !!"
       << endl;
  cout << "              !!!!!!; `!!!!!i;. ~~~~~~~ "
          ".;i!!!!''`.;i!!!!!!!'.;!!!!!!!>  !"
       << endl;
  cout << "          :!  !!!!!!!i `'!!!!!!!!!!!!!!!'''`.;ii!!!!!'`.'` "
          ";!!!!!!!!!!   "
       << endl;
}

void display_splinter() {
  cout << "                                                     ," << endl;
  cout << "                                                  ,-'" << endl;
  cout << "                                                ,d'e" << endl;
  cout << "                                              .d$ d$" << endl;
  cout << "                                             ,$$F $$" << endl;
  cout << "                                          .zd$$$b $$c" << endl;
  cout << "                                        ,d$$$$$$F 4''" << endl;
  cout << "                                      c$$$$$$$$$, $F" << endl;
  cout << "      a,                     ,r= ze$e$$$$$$$$$P'z$'?" << endl;
  cout << "      `$$duJu,ec.      ,c$ce$$$$$$$$$$$$$$$$$$r'$P" << endl;
  cout << "       ?$$$$$$$$$''.r ,$$$$$$$$$$$$$$$$$$$$$$$$$c'" << endl;
  cout << "        ?$$$$$$P z$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c." << endl;
  cout << "         `'$$$$ z$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c,." << endl;
  cout << "             ''4$$$$$$$$$$$$P' . .,ce$be,3$$$$$$$$$$$$$$bc,."
       << endl;
  cout << "               $$$$$$$$$$$''. z$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$P="
       << endl;
  cout << "              J$$$$$$$$$$b$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$bc,."
       << endl;
  cout << "             e$$$$$$$$$$$$$$$P'.,cecc,C$$$$$$$$$$$P$$$$$$$$$$$$$L`"
       << endl;
  cout << "           z$$$$$$$P'$$$$$$P?$$$$$$$$$$$$$$$$$$$$$$.'$$$$$$$$$$$$$b!"
       << endl;
  cout
      << "          .J'?$$$F$ $$$$$',eF' ,    '3$$$$$$$$$$$$$$c $$??4F?$$$$$$c`"
      << endl;
  cout << "          $P== '' $c`'',cd',gd$b  .e$$$$$$$$$$$$$$$'?L $c     '?% "
          "'? ?' .."
       << endl;
  cout << "           -$L   $FF''??%,,,,,ced$$$P$$$$$$$$$$$$$$$.'' $$$$P' "
          ".<::>` .:!!!''"
       << endl;
  cout << "          ,ec,,. zd$$$$$uCC$$$$$??$'z$$$$$$$?$$$$$$'3 z$$P' ;!!!  "
          ":!!!' . '"
       << endl;
  cout << "          ?$$$$'dF''(($$$$$$$cec$Le$$$$$$$P',$$$$$$F %J$''  !!!  "
          "<!!!` ;!!!!"
       << endl;
  cout << "           4$P'cedd$$$$$$$$$$$$$$$$$$$$$P' d$$$$$$ % .$' ;!!'  !!!' "
          ";!!!!!!"
       << endl;
  cout << "           4'.,ccd$$$$$$$$$$$$$$P!!!'L.z' d$$$$$$$ .d$% <!!   <!' "
          ";!!!!!!!!"
       << endl;
  cout << "           z$$$$$$$$$$$$$$$$P'.cd$ed$$P .d$$$$$$$''.$$% <!!  ,!!  "
          "<!!!!!!!!!"
       << endl;
  cout << "         z$$$$$$$$$$$$$$$P'.c$$$$$$P' ,c$$$$$$$$Lz$$'' <!!  ;!' "
          ";!!!!!!!!!!!"
       << endl;
  cout << "       .$$$$$$$$$$$$$$$P',d$$$P''  ,d$$$$$$$$$$$$$$% <!!  ,!' "
          "<!!!!!!!!!!!!"
       << endl;
  cout << "       $$$$$$$$$$$$P'`,e$$P''V    c$$$$$$$$$$$$$$$'' <!!' ;! "
          ";!!!!!!!!!!!!!!"
       << endl;
  cout << "     .$$$$$$$$$P'`,e$$$$P'    , .$$$$$$$$$$$$$$$$P <!!' ;' "
          ";!!!!!!!!!!!!!!!"
       << endl;
  cout << "     J$$$$$$$F.d$$$$$$P V  ,;; z$$$$$$$$$P''`.d$$ ;!!! :' "
          "<!!!!!!!!!!!!!!!!"
       << endl;
  cout << "     $$$$$$P',$$$$$$P'   ;;;' c$$$' zd$F.- ze$$$'' !!! <' "
          "<!!!!!!!!!!!!!!!!!"
       << endl;
  cout << "     ..''$',$$$$$$$' . ::;; .d$$' .$$F',c$?$$$$F <!!!!  "
          "!!!!!!!!!!!!!!!!!!!"
       << endl;
  cout << "   ::::::.4$$$$$$F  J$ `:' z$$$''            `'?  !!!!  "
          "!!!!!!!!!!!!!!!!!!!!"
       << endl;
  cout << "   :::::::.$$$P'    $$becd$$$''                  !!!!  "
          "!!!!!!!!!!!!!!!!!!!!!"
       << endl;
  cout << "   :::::' `'        `?P??F'                    :!!! "
          ";!!!!!!!!!!!!!!!!!!!!!!"
       << endl;
  cout << "   `'''                                        <!! "
          ";!!!!!!!!!!!!!!!!!!!!!!!"
       << endl;
  cout << "                                               !!  "
          "!!!!!!!!!!!!!!!!!!!!!!!!"
       << endl;
  cout << "                                              <!  "
          "!!!!!!!!!!!!!!!!!!!!!!!!!"
       << endl;
  cout << "                                              !  "
          "!!!!''``..,..``'!!!!!!!!!!"
       << endl;
  cout << "                                             <  "
          "!'`.::!!!!!!!!!!>:`!!!!!!!!"
       << endl;
}
#endif
