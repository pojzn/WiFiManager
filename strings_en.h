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

const char HTTP_HEAD_START[] PROGMEM = "<html lang=\"en\"><head><title>Nixie Tap Configuration Portal</title><meta name='viewport' content='width= device-width, initial-scale=1.0 '>"
                                       "<meta http-equiv='content-type' content='text/html; charset=utf-8' >";

const char HTTP_SCRIPT[] PROGMEM = "<script> var selected_wifi = '';"
                                        "function change_wifi(button){"
                                            "if (selected_wifi == button.innerHTML){"
                                                "selected_wifi = '';"
                                                "button.style.background = 'rgba(255, 255, 255, 1)';"
                                                "button.style.fontWeight = 400;"
                                            "}else{"
                                                "button.style.background = 'rgba(210,105,30, 0.3)';"
                                                "button.style.fontWeight = 'bold';"
                                                "for (btn of document.getElementById('wifi-list').children){"
                                                    "if (btn == button){"
                                                        "continue;"
                                                    "}"
                                                    "btn.style.background = 'rgba(255, 255, 255, 1)';"
                                                    "btn.style.fontWeight = 400;"
                                            "}"
                                            "selected_wifi = button.innerHTML;"
                                            "}"
                                            "document.getElementById('target_ssid').value = selected_wifi;"
                                        "}"
                                        "function manual_td(){"
                                            "document.getElementById('time').disabled = false;"
                                            "document.getElementById('date').disabled = false;"
                                            "document.getElementById('offset').disabled = true;"
                                            "document.getElementById('dst').disabled = true;"
                                        "}"
                                        "function automatic_td(){"
                                            "document.getElementById('time').disabled = true;"
                                            "document.getElementById('date').disabled = true;"
                                            "document.getElementById('offset').disabled = false;"
                                            "document.getElementById('dst').disabled = false;"
                                        "}"
                                    "</script> ";
const char HTTP_HEAD_END[] PROGMEM = "</head><body><div class='container'><header><img style='' id='naslov' src=' data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAOEAAAAmCAYAAAAyXvx2AAAFGUlEQVR4nO2c643bOBRGD4JtwC2oBW8J3hKcEjwlOCXYJXhKiEuYKWGmhLiEdQnZHzQxWkESP1IkRQf3AALykESK5uV9kmAYhmEYhmEYTbIDfgeu44L3HwPvfkvs0xg/hefU7zmI7/rI1HflOfXKwVvG/vSvndD2RnxX6rxcOtZvwAXYxzT6LbGznhPa4K3NC3AX7jsB3cz/b9B/4BfxPkPnkPm+3Owebf8E/kWcK0uFkEeDcxO3Be7oQnGZ+b8D2rf+AD7F9gwdVcN0wLZkRwQ2uEX94/HnSXII4QYniK1zBc7CfTvGtXuHG9QQ72I7Rhxb4gRrLW04ZIszUycFMYcQ+obmNEgrnIGbcN/YtyjfF6NxjThihSrKLyvMlpkFPJcQghukVlafKVQh6fi/PT+lHYeoQm7EEytUG9qaj5OuTE4hBCfta9viIVRz8cjXoCla0MzQchwI+FUTlAgavg+umEU3elFIDdf+QhuwmimKMT6Ed12Efv7GRcJC31wyRdEKofRFaupgSVokJmiYOtYd2nwapq2A/JrQd+gZ/EPFLD2gTRw1BWLE07FMo9XwDW/AP4TnwKiVWEIIwX34kkR+DT5xqYQQIQ13fVxGGUJCFJr4tfzCO848jaaUEMJzJPLPLMvnWTS0PCEhCvnhNXOGSXOppBDCcyTyv5NuSi551gizJzx/XglP/lraMCV4xF8LG31nXtv5RP7fC9spyQ23miqJ+D5nEs2PAowFsYZccRP2mQhZUlfcInhlXtvtqWOxZPc/lUjRBhcZVKKMQ9aOjg6JicCpEeAcfc9VwF3DR88ZHVWKtb2G6yLunWPJ/FKi6L/GHlyqCe+4qNBo6LXHAWcytLwSvyDU+fXuNTO0LIrQ+IDYDTe/5rThjjzzr6+dO9x82Qfa9oxaTkuFEL6ijCFz7vS4t9XCZj+gClvaMUX/VEKmnTdF+38PmaQdyyuaFNN/itE5kyswcya8ynj/MMl5LUxsEXq/msbIj1KsPZzQSppozXrSGxN9zBkdVbbvtJrIj10cnmXnyLMSY4p6vEm69L2lmAwM5RRCnzML+UqtJfKPpOUzt7T1HX8SsaZo/9/nWFp9k8oLM+5LDp+wz+ejwZCW8P7h2sxuMRE44QZ37W9RKn/W7qOKUqw9NaGvhH/P/czzufGKKbmiakm49iQ8G7pKpyg2uJDx0n6qEVUr4NYsh1Jn2Phrrtg+VzrojYidH7k1oecHTsu0XLZ2IRxcuT+uufu8WapoI2OeGuaiTymkpivGfue+lRGtZUsJIbiSrpSkdg0OaJEyv0k3ZF4f+dpfZqRTK3q5RAiz7xktWTvqE/mtofqB/kwadZfEhTYXnGeiVvRyR0MpptIF3Op2oZoowjLcHaFEfVtNvzwLSrF27vaaoLQQgpbIr4V6/MZQ6O5oi8medX5cNWDQMrXjB82cP1PSJ+zjAzVrnj+j5ie9CTrk9fGO0GS54HxDqy3VUQ5luhG3mIcO5/JBoKb9+Nyh8S3ajosSKYpObDsUSFLfk7PvrR2DP0dqikLZgRBbGKGM29B9WCUdVMMc9fhE/hqoQZPQJl2/9zDEDqumiUEx4WNdGuUktD0NBNNqCiHop2DnRC1LU4+uV4/EsCJvDcVNeSXNvFc2FaweoKkthOAmey07fIeWjvgkbnFQNLoVeWukFGurtL6zAlhHCKHO2SyqENxx/YlBTb1YkXeYkBDcSF+0lWebyhkahmEYhmEYRmX+A2i3FdsQ0zAzAAAAAElFTkSuQmCC' alt=''/></header>";
const char HTTP_ROOT_MAIN[] PROGMEM = "<div><hr class='hr_title'><h2 style='text-align: center; margin-bottom: 5%;'>CONFIGURATION PORTAL <blink>•</blink></h2>"
                                      "<form action='paramsave' method='post'><h3>WI-FI SETTINGS</h3><hr><div class='input-grp'><legend>What will the Nixie Tap's hotspot name be? Leave blank for default.</legend>"
                                      "<input class='input-margin' type='text' name='SSID' placeholder='NixieTap AP SSID'><input class='input-margin' type='password' name='Password' placeholder='NixieTap AP password'>"
                                      "<br><legend>Which network should Nixie Tap use to connect to the Internet?</legend>{v}<input type='hidden' name='target_ssid' id='target_ssid' placeholder='Target WiFi network SSID'>"
                                      "<br/><input style='width:30%; margin-top:3%;' type='password' name='target_password' placeholder='Target WiFi network password'></div><h3>TIME AND DATE</h3><hr><div class='input-grp' style='margin-bottom:1%;'>"
                                      "<div><input type='checkbox' name='enableTime' id='show_time'><label for='show_time'>show time</label></div><div><input type='checkbox' name='enableDate' id='show_date'><label for='show_date'>show date</label>"
                                      "</div></div><div class='input-grp'><div>In manual mode, you set the time yourself.</div><div style='margin-top:1%; margin-bottom:1%'>In automatic mode, if Internet is available, Nixie Tap will ping an NTP time server for accurate time.</div>"
                                      "<div style='margin-top:2%; margin-bottom:2%; display:flex;'><input type='radio' id='man_td' onclick='manual_td()' name='setTimeManuallyFlag' value='1'><label for='man_td'>manual</label><input disabled='disabled' id='time' name='time' type='time'>"
                                      "<input disabled='disabled' name='date' id='date' type='date'></div><div style='margin-top:1%;'><input type='radio' name='setTimeManuallyFlag' value='0' onclick='automatic_td()' id='auto_td'>"
                                      "<label for='auto_td'>automatic</label<input disabled='disabled' type='text' name='offset' id='offset' placeholder='Your GMT offset in minutes'><input disabled='disabled' type='checkbox' name='dst' id='dst'>"
                                      "<label for='dst'>daylight savings time</label></div></div><h3>TEMPERATURE</h3><hr><div style='margin-top:1%; margin-bottom:1%;'><input type='checkbox' name='temperatureEnable' id='show_temp'><label for='show_temp'>show temperature</label>"
                                      "</div><div class='input-grp'><div style='margin-top:1%;'>For this functionality you need the Openweathermap API key. You can get it at <a href='https://openweathermap.org/api'>openweathermap.org/api</a>"
                                      "</div><input class='input-margin' name='weather_api' type='text' placeholder='API key'><input class='input-margin' name='weather_id' type='text' placeholder='City ID'>"
                                      "<div>Weather format</div><div><input type='radio' id='metric_wf' onclick='metric_wf()' name='weatherFormat' value='1'><label for='man_td'>metric</label><input type='radio' id='imperial_wf' onclick='imperial_wf()' name='weatherFormat' value='0'>"
                                      "<label for='man_td'>imperial</label></div></div><h3>CRYPTOCURRENCY</h3><div style='margin-bottom:1%'><input type='checkbox' id='show_crypto'><label for='show_crypto'>show cryptocurrency price</label>"
                                      "</div><div class='input-grp' id='crypto-grp'><div style='margin-top:1%;'>For this functionality, you need the Coinmarketcap API key. You can get it at <a href='https://coinmarketcap.com/api'>coinmarketcap.com/api</a>"
                                      "</div><div>While you're on their website, note down the ID number of your desired cryptocurrency.</div><input type='text' name='stackKey' id='stackKey' placeholder='API key'><input type='text' name='cryptoID' placeholder='Cryptocurrency ID'>"
                                      "</div><div class='buttons'><button type='submit'>Save</button><button type='reset'>Clear</button></div></form></div>";

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

const char HTTP_STYLE[] PROGMEM = "<style>blink{animation:blinker 2s steps(1, end) infinite;color:chocolate;} @keyframes blinker{0% { opacity:0; } 50% { opacity:1; } }"
"h3{margin-top: 3%;} html{background:#f2f1ef;font-family:'Tahoma';} .container{display:flex;margin:2% 25%;flex-direction: column;justify-content: center;"
"box-shadow: 0px 4px 8px #9a9a9a;background-color: white;} header{width:100%;display:flex;justify-content: center;}"
"#naslov {padding: 3%;}.msg{float : left;}form{margin-left : 5%; margin-right : 1%; display:flex; flex-direction: column; justify-content: center;}"
".input-grp{display: flex;flex-direction: column; align-items : flex-start; padding: 1% 2%;} .input-margin{ margin-bottom : 1%;}"
"legend{margin-bottom: 1%;font-weight: bold;} .buttons button{ border:1px solid rgba(10, 10, 10, 1); background: rgba(255, 255, 255, 1);"
"font-size: 18px; color:black; margin-top: 20px; padding:10px 50px; cursor: pointer; transition: .4s;} .buttons button:hover{ background:rgba(210, 105, 30, 0.3);"
"padding:10px 80px; font-weight: bold;} .buttons {display:flex; justify-content: center;} #wifi-list {display: flex; flex-direction: row; flex-wrap : wrap;"
"justify-content: center;} #wifi-list button { border : 1px solid rgba(10, 10, 10, 1);background : rgba(255, 255, 255, 1); font-size : 14px; word-wrap: break-word;"
"color : black; margin-top : 15px; padding : 20px 20px;cursor : pointer;transition : .4s; width: 25%;}.hr_title{ display:block; margin: 0 5% 2% 5%;border-style: solid;"
"border-width: 4px;} hr{ display:block; margin: 0.5% 95% 2% 0; border-style: solid; border-width : 2px;} input {border:none; border-bottom: 1px solid black; padding:1%;}"
"@media only screen and (max-width : 800px){ .container{margin:0;}} @media only screen and (max-width : 750px){ #wifi-list button {padding : 7px 7px;}}</style> ";

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
