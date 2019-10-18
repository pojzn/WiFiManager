/**
 * strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 * 
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! THIS DOES NOT WORK, you cannot define in a sketch, if anyone one knows how to order includes to be able to do this help!

const char HTTP_HEAD_START[] PROGMEM = "<html lang=\"en\"><head><title>NixieTap Configuration Portal</title>";
const char HTTP_SCRIPT[] PROGMEM = "<script>function manual_td(){ document.getElementById('time').disabled = false;"
                                    "document.getElementById('date').disabled = false;"
                                    "document.getElementById('offset').disabled = true;"
                                    "document.getElementById('dst').disabled = true;}"
                                    "function automatic_td(){ document.getElementById('time').disabled = true;"
                                    "document.getElementById('date').disabled = true;"
                                    "document.getElementById('offset').disabled = false;"
                                    "document.getElementById('dst').disabled = false;}</script>";
    const char HTTP_HEAD_END[] PROGMEM = "</head><body><div class='container'><header><div id =\"naslov\"><a href=\"/\"><img src=\"data:image/png;base64,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\" alt = \"\"/></a></div></header>";
const char HTTP_ROOT_MAIN[] PROGMEM = "<div style='margin:5%;float:left;width:90%'><form action='paramsave' method='post'><h3>GENERAL</h3><hr/><fieldset><legend>Set the name of your NixieTap hotspot</legend>"
                                      "<input type='text' name='SSID' placeholder='NixieTap AP SSID'>&nbsp<input type='password' name='Password' placeholder='NixieTap AP password'><br/>"
                                      "<input type='text' name='target_ssid' placeholder='Target WiFi network SSID'></input>&nbsp<input type='password' name='target_password' placeholder='Target WiFi network password'></input></fieldset>"
                                      "<h3>TIME AND DATE</h3><hr/><fieldset style='margin-bottom:1.5%;'><legend>Select what will be displayed on your NixieTap</legend>"
                                      "<div><input type='checkbox' name='enableTime' id='show_time'><label for='show_time'>show time</label></div>"
                                      "<div><input type='checkbox' name='enableDate' id='show_date'><label for='show_date'>show date</label></div>"
                                      "</fieldset><fieldset><legend>Select time/date source</legend><div style='margin-bottom:1%;'><input type='radio' id='man_td' onclick='manual_td()' name='setTimeManuallyFlag' value='1'>"
                                      "<label for='man_td'>manual</label>&nbsp<input disabled id='time' name='time' type='time'><input disabled name='date' id='date' type='date'></div><div><input type='radio' name='setTimeManuallyFlag' value='0' onclick='automatic_td()' id='auto_td'>"
                                      "<label for='auto_td'>automatic</label>&nbsp<input disabled type='text' name='offset' id='offset' placeholder='Your GMT time offset'></input>&nbsp<input disabled type='checkbox' name='dst' id='dst'><label for='dst'>daylight savings time</label></div>"
                                      "</fieldset><h3>TEMPERATURE</h3><hr/><div style='margin-bottom:1%;'><input type='checkbox' name='temperatureEnable' id='show_temp'><label for='show_temp'>show temperature</label>"
                                      "</div><fieldset><legend>Openweathermap API key</legend><div>you can get your API key at <a href='https://openweathermap.org/api'>openweathermap.org/api</a></div>"
                                      "<input type='text' placeholder='API key'><input type='text' placeholder='weatherFormat'></input></fieldset><h3>CRYPTOCURRENCY</h3><hr/><div style='margin-bottom:1%'><input type='checkbox' id='show_crypto'>"
                                      "<label for='show_crypto'>show cryptocurrency price</label></div><fieldset><legend>Coinmarketcap API key</legend>"
                                      "<div>you can get your API key at <a href='https://coinmarketcap.com/api'>coinmarketcap.com/api</a></div><input type='text' name='stackKey' id='stackKey' placeholder='API key'></input>&nbsp<input type='text' name='cryptoID' placeholder='Cryptocurrency ID'></input></fieldset><button type='submit'>Save</button><button type='reset'>Clear</button></form></div>";
const char *const HTTP_PORTAL_MENU[] PROGMEM = {
    "<li><a href='/wifi'>Configure WiFi</a></li>\n",                 // MENU_WIFI
    "<li><a href='/0wifi'>Configure WiFi (No Scan)</a></li>\n",      // MENU_WIFINOSCAN
    "<li><a href='/info'   >Info</a></li>\n",                        // MENU_INFO
    "<li><a href='/param'  >Setup</a></li>\n",                       //MENU_PARAM
    "<li><a href='/close'  >Close</a></li>\n",                       // MENU_CLOSE
    "<li><a href='/restart'>Restart</a></li>\n",                     // MENU_RESTART
    "<li><a href='/exit'   >Exit</a></li>\n",                        // MENU_EXIT
    "<li><a href='/erase'>Erase</a></li>\n", // MENU_ERASE
    "<hr><br/>"                                                      // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage
const char HTTP_ITEM[]             PROGMEM = "<tr><td>{num}</td><td>{v}</td><td>{qp}</td></tr>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_CUSTOM_WIFI[] PROGMEM = 
"<form style='float:left;width:100%;' method='POST' action='{v}'><ul class= \"form\" style='float:none;'>"
"<li><label>Connect to WiFi network:</label>"
"<input type=\"text\" name=\"ssid\" class=\"field-divided\" placeholder=\"WiFi SSID\"/>"
"<input type=\"password\" name=\"password\" class=\"field-divided\" placeholder=\"Password\"/></li>"
"<li><input type=\"submit\" value=\"Submit\"/></li></ul>"
"</form>";
      const char HTTP_FORM_START[] PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder=''>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>";

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Saving Credentials<br/>Trying to connect ESP to network.<br />If it fails reconnect to AP to try again</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg'>Saved<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi Config</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg P'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Not Connected</strong> to {v}{r}</div>";
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentication Failure"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP not found";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Could not Connect"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>No AP set</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[] PROGMEM = "<style>html{background:#f2f1ef; font-family: \"Tahoma\";} .container{float:left;margin-left: 25%;margin-top: 5%;width:50%;box-shadow: 0px 4px 8px #9a9a9a;background-color: white;}"
                                  "header{float:left; width:100%; background: repeating-linear-gradient(135deg, rgba(0, 0, 0, 0.1), rgba(0, 0, 0, 0.1) 5px, rgba(0, 0, 0, 0.2) 5px, rgba(0, 0, 0, 0.2) 10px);}"
                                  "#naslov {float: left; padding: 3%; margin-left:37%;}"
                                  "nav{float:left;width:100 %;}"
                                  "ul{float:left;padding:0;margin:0;width:100%;background-color:white;}"
                                  "ul li{padding: 0;float: left;list-style:none; width: 33.3333%;}"
                                  "ul li a{display: block; float: left; text-decoration: none; width:100%; text-align: center; padding:8% 0;background-color: rgba(0, 0, 0, 0.2);transition:background-color 0.5s ease 0.2s;color:black;}"
                                  "ul li a:hover{background-color: rgba(0, 0, 0, 0.33)}"
                                  ".msg {float:left;}"
                                  "dt {float:left;width:50%;}"
                                  "dd {float:right;width:50%; margin-left:0;}"
                                  "#sketch_size{float:left;width:100%;}"
                                  ".form { margin:10px auto; max-width: 400px; padding: 20px 12px 10px 20px;}"
                                  ".form li {padding: 0; display: block; list-style: none; margin: 10px 0 0 0; width:100%;}"
                                  ".form label{margin:0 0 3px 0; padding:0px; display:block; font-weight: bold;}"
                                  ".form input[type=text], .form input[type=date], .form input[type=datetime], "
                                  ".form input[type=number], .form input[type=search], .form input[type=time], "
                                  ".form input[type=url], .form input[type=password], .form input[type=email], textarea, select{"
                                  "box-sizing: border-box; -webkit-box-sizing: border-box; -moz-box-sizing: border-box; "
                                  "border:1px solid #BEBEBE;	padding: 7px; margin:0px; -webkit-transition: all 0.30s ease-in-out;"
                                  " -moz-transition: all 0.30s ease-in-out; -ms-transition: all 0.30s ease-in-out; -o-transition: all 0.30s ease-in-out; outline: none;}"
                                  ".form input[type=text]:focus, .form input[type=date]:focus, .form input[type=datetime]:focus, .form input[type=number]:focus,"
                                  ".form input[type=search]:focus, .form input[type=password]:focus, .form input[type=time]:focus, .form input[type=url]:focus, .form input[type=email]:focus, "
                                  ".form textarea:focus, .form select:focus{ -moz-box-shadow: 0 0 8px #88D5E9; -webkit-box-shadow: 0 0 8px #88D5E9; box-shadow: 0 0 8px #88D5E9;"
                                  " border: 1px solid #88D5E9;}"
                                  ".form .field-divided{ width: 50%;}"
                                  ".form .field-long{	width: 100%;}"
                                  ".form .field-select{ width: 100%;}"
                                  ".form .field-textarea{	height: 100px;}"
                                  ".form input[type=submit], .form input[type=button]{ background: #4B99AD; padding: 8px 15px 8px 15px; border: none;	color: #fff;}"
                                  ".form input[type=submit]:hover, .form input[type=button]:hover{ background: #4691A4; box-shadow:none; -moz-box-shadow:none; -webkit-box-shadow:none;}"
                                  ".form .required{ color:red;}"
                                  ".wifi_table{ margin-left:auto;margin-right:auto;width:auto;border-collapse: collapse;border-spacing:0;empty-cells:show;border:1px solid #cbcbcb;}"
                                  ".wifi_table thead{ background-color:#e0e0e0;color:#000;text-align:left;vertical-align:bottom;}"
                                  ".wifi_table th{ border-left: 1px solid #cbcbcb; border-left-width: 1px; border-width: 0 0 0 1px;font-size: inherit;margin: 0;overflow: visible;padding: .5em 1em;}"
                                  ".wifi_table td, .wifi_table th{ border-bottom: 1px solid #cbcbcb; background-color: transparent;"
                                  "border-left: 1px solid #cbcbcb; border-left-width:1px; border-width: 0 0 0 1px;"
                                  "border-bottom-width:1px; font-size:inherit;margin:0;overflow:visible;padding:.5em 1em;}"
                                  "hr {width:20%; padding-top:0.2%; background: black; margin-left:0;}"
                                  "h3 {margin-bottom:0;}"
                                  "fieldset {margin-bottom:5%}"
                                  "</style>";

const char HTTP_HELP[] PROGMEM =
    "<br/><h3>Available Pages</h3><hr>"
    "<table class='table'>"
    "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
    "<tr><td><a href='/'>/</a></td>"
    "<td>Menu page.</td></tr>"
    "<tr><td><a href='/wifi'>/wifi</a></td>"
    "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
    "<tr><td><a href='/wifisave'>/wifisave</a></td>"
    "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
    "<tr><td><a href='/param'>/param</a></td>"
    "<td>Parameter page</td></tr>"
    "<tr><td><a href='/info'>/info</a></td>"
    "<td>Information page</td></tr>"
    "<tr><td><a href='/close'>/close</a></td>"
    "<td>Close the captiveportal popup,configportal will remain active</td></tr>"
    "<tr><td><a href='/exit'>/exit</a></td>"
    "<td>Exit Config Portal, configportal will close</td></tr>"
    "<tr><td><a href='/restart'>/restart</a></td>"
    "<td>Reboot the device</td></tr>"
    "<tr><td><a href='/erase'>/erase</a></td>"
    "<td>Erase WiFi configuration and reboot Device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
    "</table>"
    "<p/>More information about WiFiManager at <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";

#ifdef JSTEST
const char HTTP_JS[] PROGMEM = 
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
  const char HTTP_INFO_lastreset[]    PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  const char HTTP_INFO_aphost[]       PROGMEM = "<dt>Acccess Point Hostname</dt><dd>{1}</dd>";  
#else 
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
    const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dt id='sketch_size'>Used / Total bytes</dt><dt>{1} / {2}</dt>";
    const char HTTP_INFO_memsmeter[]  PROGMEM = "<progress value='{1}' max='{2}'></progress></dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
#endif

const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>"; 
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";
const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";

// Strings
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";

const char S_titlewifisaved[]     PROGMEM = "Credentials Saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup Saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An Error Occured";
const char S_notfound[]           PROGMEM = "File Not Found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 9;
const char * const _menutokens[9] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "sep"
};

const char R_root[]               PROGMEM = "/";
const char R_wifi[]               PROGMEM = "/wifi";
const char R_wifinoscan[]         PROGMEM = "/0wifi";
const char R_wifisave[]           PROGMEM = "/wifisave";
const char R_info[]               PROGMEM = "/info";
const char R_param[]              PROGMEM = "/param";
const char R_paramsave[]          PROGMEM = "/paramsave";
const char R_restart[]            PROGMEM = "/restart";
const char R_exit[]               PROGMEM = "/exit";
const char R_close[]              PROGMEM = "/close";
const char R_erase[]              PROGMEM = "/erase"; 
const char R_status[]             PROGMEM = "/status";


//Strings
const char S_ip[]                 PROGMEM = "ip";
const char S_gw[]                 PROGMEM = "gw";
const char S_sn[]                 PROGMEM = "sn";
const char S_dns[]                PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
	const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
	const char S_ssidpre[]        PROGMEM = "ESP32";
#else
	const char S_ssidpre[]        PROGMEM = "WM";
#endif

//Tokens
//@todo consolidate and reduce
const char T_ss[]                 PROGMEM = "{"; // token start sentinel
const char T_es[]                 PROGMEM = "}"; // token end sentinel
const char T_1[]                  PROGMEM = "{1}"; // @token 1
const char T_2[]                  PROGMEM = "{2}"; // @token 2
const char T_v[]                  PROGMEM = "{v}"; // @token v
const char T_I[]                  PROGMEM = "{I}"; // @token I
const char T_i[]                  PROGMEM = "{i}"; // @token i
const char T_n[]                  PROGMEM = "{n}"; // @token n
const char T_p[]                  PROGMEM = "{p}"; // @token p
const char T_t[]                  PROGMEM = "{t}"; // @token t
const char T_l[]                  PROGMEM = "{l}"; // @token l
const char T_c[]                  PROGMEM = "{c}"; // @token c
const char T_e[]                  PROGMEM = "{e}"; // @token e
const char T_q[]                  PROGMEM = "{q}"; // @token q
const char T_r[]                  PROGMEM = "{r}"; // @token r
const char T_R[]                  PROGMEM = "{R}"; // @token R
const char T_h[]                  PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[]         PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[]         PROGMEM = "text/html";
const char HTTP_HEAD_CT2[]        PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[]       PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[]  PROGMEM = "*";

const char * const WIFI_STA_STATUS[] PROGMEM
{
  "WL_IDLE_STATUS",     // 0 STATION_IDLE
  "WL_NO_SSID_AVAIL",   // 1 STATION_NO_AP_FOUND
  "WL_SCAN_COMPLETED",  // 2
  "WL_CONNECTED",       // 3 STATION_GOT_IP
  "WL_CONNECT_FAILED",  // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
  "WL_CONNECTION_LOST", // 5
  "WL_DISCONNECTED",    // 6 
  "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE 
};

#ifdef ESP32
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "OPEN",
    "WEP",             
    "WPA_PSK",         
    "WPA2_PSK",        
    "WPA_WPA2_PSK",    
    "WPA2_ENTERPRISE", 
    "MAX"
};
#elif defined(ESP8266)
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "",
    "",
    "WPA_PSK",      // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK",     // 4 ENC_TYPE_CCMP
    "WEP",          // 5 ENC_TYPE_WEP
    "",
    "OPEN",         //7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char* const WIFI_MODES[] PROGMEM = { "NULL", "STA", "AP", "STA+AP" };

#ifdef ESP32
const wifi_country_t WM_COUNTRY_US{"US",1,11,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,WIFI_COUNTRY_POLICY_AUTO};
#endif
