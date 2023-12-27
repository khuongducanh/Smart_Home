/*
                           '@          @@@:              @@@@@@ @@` '@@
                       .@@@@@#         @`@@@@@.            @@   @@# @'@
                      @@@.  `@        ;@    .@@            @@   @.@ @.@
                     `@      @@       @@     @+            @@   @ @ @.@
                      @`      @:      @`     @`            @@   @ @@@.@
                      @#      ;@@@@@@@@      @             @@   @ #@,.@
                      '@                     @             @@   @ .@ .@
                      ;@                     @@.      @@@
            `@      `@@.                      +@@    @@`@@
            @@@'   @@@                          @@; @@   @@
           @@ ,@@#@@                             ,@@@     @@
          @@    #@                                 ,       @+
         @@                  .#@@@@@@@@@@@`                @,
         @                @@@@@+,     `:+@@               @@
         #@               @:             @@              '@
          @@              @#             @.              @,
           @@             `@            `@     ++        @
           `@        #     @+           @@    ;@@@       @@
           @+       @@@    .@   `       @`   .@@@@@       @,
          +@       @@@@@    @+'@@,  @@@#@    @@@@@@@      '@
          @.      @@@@@@+   `@@@@   :@'@;   @@@@@@@@@      @@   .+`
         @@      @@@@@@@@`     @;    @@    #@@@@@@@@@,      @@@@@@@
   @@@: `@      +@@@@@@@@@    +@      @.   `@@@@@@@@@@       '`   @
   @,@@@@;      @@@@@@@@@@    @:  @@  +@    ;@@@@@@@@@#           @;
   @           @@@@@@@@@@,   #@  @@@@  @#    #@@@@@@@@@           @@
  '@           @@@@@@@@@@    @,  @``@` `@    @@@@@@@@@@,          `@
  @@          ;@@@@@@@@@+   @@  @@  @@  @@   @@@@@@@@@@@           @`
  @,          @@@@@@@@@@@   @. .@    @#  @' @@@@@@@@@@@@          @@:
  @           @@@@@@@@@@@@ @@  @@    ,@  :@'@@@@@@@@@@@@       :@@@`
  @@#         @@@@@@@@@@@@,@` ;@ '@@' @@  @@@@@:@@@@@@@@`      @'
   ;@@@      ;@@@@@@@@@@@@@@  @'@@.,@@,@; @@@@@ #@@@@@@@`      @
      @      @@@@@@@@' @@@@@ #@@+    ;@@@.@@@@.  @@@;          @
      @          .;+@  '@@@@#@'@      ;@@@@@@@                 @
      @                 @@@@@@:@      +@;@@@@@                 @
      @`                @@@@@@:@      #@@@@@@@@  @@@:          @
      @`         .@@@#  @@@@@@+@      @@@@@@+ @;+@+@@@@@@      @
      @`      @@@@@;;@ @@.@@@@@@#    :@@@@@@` ;@@#     .@      @@+
      @`     '@,     @.@  @@@@@@@@' @@@@@@@@@  @@,     +@       :@@@.
    `@@`     ;@      @@# +@@@@@@  @@@ @@@@@ @+  @      @+          @@
  +@@@       `@      .@  @, @@@@@    @@@@@  `@         @           '@
 #@:          @         @@  #@@@@.   @@@@@   @@       .@           @#
  @           @         @    @@@@@  @@@@@    :@       @@           @`
  @;          @#       +@    .@@@@@.@@@@#   `@:       @            @
  #@          ,@        @@    @@@@@@@@@@    @#       @@       ,   @@
   @           @,        @#    @@@@@@@@#    @`      `@       @@@@@@;
   @@@@@@@     :@         @    '@@@@@@@     +@      @#      ;@
    #;.  @@     @@       @@     @@@@@@@.@    @@    @@       @;
         `@      @+     @@   #@@@@@@@@@@@+    @+  @@       +@
          @@      @@   #@    @@@@@@@@@@@@@    `@.@@        @:
           @.      @@.:@     @@@@@@@@@@@@@#    '@#        +@
           '@       #@@,    #@@@@@@@@@@@@@@               @;
            @;              @@@@@@@@@@@@@@@'              `@`
           `@               @@@@@@@@@@@@@@@@               #@
           @+              '@@@@@@@@@@@@@@@@                @@
          @@                '@@@@@@@@@@@:                    @:
         @@                                          '      @@
         +@;     `@;                               @@@@    @@
          :@+   ,@'@@                            ;@@  @@# @@
           .@@ :@;  @@@                         @@:    .@@@
             @@@;     @@:                     `@@        '
              @;       ;@@                    .@
                        '@      +@@@@@@@.      @
                        @@     .@###@@@@@      @`
                        @;     @@       @.     @+
                        @`     @        @@    ,@@
                        @@@.  ;@        `@;@@@@@`
                         :@@@@@#         @@@.

    @@@@@  @@@@@@  @@@@@@ @@@ @@@     @@@@@    @@@@@  @@@@@@:  @@@@@
   @@@@@@@ @@@@@@@ @@@@@@ @@@ @@@    @@@@@@@  @@@@@@@ @@@@@@@: @@@@@
   @@@ @@@ @@@@@@@ @@@@@@ @@@ @@@    @@@ @@@  @@@ @@@ @@   @@@ @@@@@
   @@@ @@@ @@@  @@ @@@    @@@ @@@    @@@ @@@  @@@ @@@ @@    @@ @@@
   @@@ @@@ @@@@@@@ @@@    @@@@@@@    @@@ @@@  @@@ @@@ @@    @@ @@@
   @@@ @@@ @@@@@@@ @@@@@  @@@@@@@    @@@      @@@ @@@ @@    @@ @@@@@
   @@@ @@@ @@@@@@@ @@@@@  @@@@@@@    @@@      @@@ @@@ @@    @@ @@@@@
   @@@ @@@ @@@@    @@@    @@ @@@@    @@@ @@@  @@@ @@@ @@    @@ @@@
   @@@ @@@ @@@@    @@@    @@ @@@@    @@@ @@@  @@@ @@@ @@    @@ @@@
   @@@ @@@ @@@@    @@@    @@ @@@@    @@@ @@@  @@@ @@@ @@   @@@ @@@
   @@@@@@@ @@@@    @@@@@@ @@  @@@    @@@@@@@  @@@@@@@ @@@@@@@  @@@@@
   @@@@@  @@@@    @@@@@@ @@  @@@     @@@@@    @@@@@  @@@@@@   @@@@@
*/


String HTMLGui(int led){
  String str = "<!DOCTYPE html> <html>\n " ;
         str += "<head> <meta charset=\"utf-8\"> <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"> <title>MyWeb</title> </head> \n" ;     
         str +=  "<style>body{background-image: url('https://c1.wallpaperflare.com/preview/398/896/843/arduino-electronics-integrated-circuit-ic.jpg');}\n" ;    
              str +=  "  h2  { margin: 15px 0;padding: 25px 50px 75px 100px;float: center;text-align: center;color : white ;}\n";
              str +=  " .nhietdodoam{float : left ;}   \n";
              str +=  " .Wifi{ height: 70px;width: 160px;margin: 15px 0;border-radius: 20px;border: 2px solid black;padding: 25px 50px 75px 100px;background-color: lightblue;float: left ;text-align: left;}\n " ;
              str +=  " .button{float: left;}  \n";
              str +=  " .quat{height: 60px;width: 410px;margin: 15px 10px;border-radius: 20px;border: 2px solid black; padding: 25px 50px 75px 100px;background-color: lightblue;float: left ;text-align: left;} \n " ;
              str +=  " .denphongngu{ height: 60px;width: 410px;margin: 15px 10px;border-radius: 20px;border: 2px solid black;padding: 25px 50px 75px 100px;background-color: lightblue;float: left ;text-align: left;} \n";       
              str +=  " .denphongkhach{height: 60px; width: 410px;margin: 15px 10px;border-radius: 20px;border: 2px solid black;padding: 25px 50px 75px 100px;background-color: lightblue;float: left ;text-align: left; }  \n";   
              str +=  " .denngoaisan{height: 60px; width: 410px;margin: 15px 10px; border-radius: 20px;border: 2px solid black;padding: 25px 50px 75px 100px;background-color: lightblue;float: left ;text-align: left; }   \n";  
              str +=  " .nhietdo{height: 70px;width: 120px;margin: 15px 0;border-radius: 20px; border: 2px solid black; padding: 25px 50px 75px 100px;background-color: lightblue;float: left ;text-align: left; }\n";  
              str +=  " .doam{height: 70px;width: 120px;margin: 15px 10px;border-radius: 20px;border: 2px solid black; padding: 25px 50px 75px 100px;background-color: #B9D3EE;float: left;text-align: left;}\n";  
              str +=  " .button_on1{height: 50px; width:  100px;margin: 15px 20px;background-color: red;border-radius: 28px;cursor: pointer;padding: 5px 40px 3px 40px;border-radius: 5px;border: 2px solid black;text-decoration: none;}\n";  
              str +=  " .button_off2{height: 50px;width: 100px;margin: 15px 20px;background-color: #00FF7F;border-radius: 28px;cursor: pointer;padding: 5px 40px 3px 40px;border-radius: 5px;border: 2px solid black;text-decoration: none;}\n";  
              str +=  " .button_on3{height: 50px;width:  100px; margin: 15px 20px;background-color: red; border-radius: 28px;cursor: pointer;padding: 5px 40px 3px 40px;border-radius: 5px;border: 2px solid black;text-decoration: none;}\n";  
              str +=  " .button_off4{height: 50px;width: 100px;margin: 15px 20px;background-color: #00FF7F;border-radius: 28px; cursor: pointer;padding: 5px 40px 3px 40px;border-radius: 5px;border: 2px solid black;text-decoration: none;}\n";  
              str +=  " .button_on5{height: 50px;width:  100px;margin: 15px 20px;background-color: red;border-radius: 28px;cursor: pointer;padding: 5px 40px 3px 40px;border-radius: 5px;border: 2px solid black;text-decoration: none;}\n";  
              str +=  " .button_off6{height: 50px;width: 100px;margin: 15px 20px;background-color: #00FF7F;border-radius: 28px;cursor: pointer;padding: 5px 40px 3px 40px;border-radius: 5px;border: 2px solid black;text-decoration: none;}\n";  
              str +=  " .button_on7{height: 50px;width:  100px;margin: 15px 20px;background-color: red;border-radius: 28px;cursor: pointer;padding: 5px 40px 3px 40px;border-radius: 5px;border: 2px solid black;text-decoration: none;}\n";  
              str +=  " .button_off8{height: 50px;width: 100px;margin: 15px 20px;background-color: #00FF7F;border-radius: 28px;cursor: pointer;padding: 5px 40px 3px 40px;border-radius: 5px;border: 2px solid black;text-decoration: none;}\n";     
              str +=  " </style> \n";  



              str += "<body><h2>\n";  
              str += "Mô Hình SmartHome (theo dõi và điều khiển các thiết bị trong nhà ) \n";
              str += "     <br>Chủ Nhà: Khương Đức Anh \n";
              str += "  </h2>\n";
              str += "<div class=\"nhietdodoam\">\n" ;
              str += "       <div class=\"nhietdo\">Nhiệt Độ : 29.0 độ</div>\n";
              str += "         <div class=\"doam\"> Độ Ẩm  : 40 %       </div>\n";   
              str += "    </div>\n";   

              str += " <div class=\"Wifi\">\n";    
              str += "<h3>Điểm kết nối : </h3>\n";    
              str += "<h3>ID   : Sir Hai T4<br>MK : 0987167931</h3>\n";    
              str += " </div>\n";    


              str += "<div class=\"button\"  >\n";    
              str += " <div class=\"quat\">\n";    
              str += "   <h3>Điều Khiển Quạt(Tầng 1 : phòng 1) </h3>\n";    
              str += "  <a class=\"button_on1\" href=\"led1on\">ON</a>\n";    

              str += "   <a class=\"button_off2\" href=\"led1off\">OFF</a>\n";    
              str += " </div>\n";    
              str += " <div class=\"denphongngu\">\n";    
              str += "   <h3>Điều Khiển Đèn Ngủ(Tầng 2 : phòng 1) </h3>\n";    
              str += " <a class=\"button_on3\" href=\"led2on\">ON</a>\n";    

              str += " <a class=\"button_off4\" href=\"led2off\">OFF</a>\n";    
              str += "   </div>\n";    
              str += "  <div class=\"denphongkhach\">\n";    
              str += "    <h3>Điều Khiển Đèn Phòng Khách(Tầng 1 : phòng 1) </h3>\n";    
              str += "   <a class=\"button_on5\" href=\"led3on\">ON</a>\n";    

              str += "   <a class=\"button_off6\" href=\"led3off\">OFF</a>\n";    
              str += "   </div>\n";    
              str += "   <div class=\"denngoaisan\">\n";    
              str += "   <h3>Điều Khiển Đèn Ngoài Sân</h3>\n";    
              str += "   <a class=\"button_on7\" href=\"led4on\">ON</a>\n";    

              str += "   <a class=\"button_off8\" href=\"led4off\">OFF</a>\n";    
              str += "     </div>\n";    
              str += "   </div>\n";    
              str += "   </body>\n";    
        str += " </html> \n" ;

              if(led){
                str += "<a class=\"button_on1\" href=\"led1on\">ON</a>\n";
              }else{
                str += "<a class=\"button_off2\" href=\"led1off\">OFF</a>\n";
              }

              if(led){
                str += " <a class=\"button_on3\" href=\"led2on\">ON</a>\n";
              }else{
                str += "<a class=\"button_off4\" href=\"led2off\">OFF</a>\n";
              }

              if(led){
                str += " <a class=\"button_on5\" href=\"led3on\">ON</a>\n";
              }else{
                str += " <a class=\"button_off6\" href=\"led3off\">OFF</a>\n";
              }

              if(led){
                str += "<a class=\"button_on7\" href=\"led4on\">ON</a>\n";
              }else{
                str += "<a class=\"button_off8\" href=\"led4off\">OFF</a>\n";
              }
  return str ;
}

