Action()
{

	web_url("webtours", 
		"URL=http://localhost:1080/webtours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	/* Sign in user11 */

	lr_think_time(42);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131107.702065614zHtDifcptcftAtzDpVVtff", ENDITEM, 
		"Name=username", "Value=user11", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=26", ENDITEM, 
		"Name=login.y", "Value=12", ENDITEM, 
		LAST);

	/* Itinerary user11 */

	lr_think_time(11);

	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	/* Sign off user11 */

	lr_think_time(13);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/* Sign in user12 */

	lr_think_time(13);

	web_submit_data("login.pl_2", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131107.707573917zHtDifcpHAiDDDDDtAtzDpVVzcf", ENDITEM, 
		"Name=username", "Value=user12", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=42", ENDITEM, 
		"Name=login.y", "Value=12", ENDITEM, 
		LAST);

	/* Itinerary user12 */

	lr_think_time(11);

	web_url("Itinerary Button_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/* Sign off user12 */

	lr_think_time(11);

	web_url("SignOff Button_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	/* Sign in user13 */

	lr_think_time(13);

	web_submit_data("login.pl_3", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131107.710571081zHtDifcpizcftAtzDpVVHVHf", ENDITEM, 
		"Name=username", "Value=user13", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=35", ENDITEM, 
		"Name=login.y", "Value=9", ENDITEM, 
		LAST);

	/* Itinerary user13 */

	lr_think_time(10);

	web_url("Itinerary Button_3", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	/* Sign off user13 */

	lr_think_time(9);

	web_url("SignOff Button_3", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	/* Sign in user11 delete ticket */

	lr_think_time(48);

	web_submit_data("login.pl_4", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131107.713325233zHtDifDpAAtVzzzHtAtzDpVViAcf", ENDITEM, 
		"Name=username", "Value=user11", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=46", ENDITEM, 
		"Name=login.y", "Value=5", ENDITEM, 
		LAST);

	/* Itinerary user11 delete ticket */

	lr_think_time(16);

	web_url("Itinerary Button_4", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(14);

	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=7430-818-bb", ENDITEM, 
		"Name=flightID", "Value=1505-1589-bb", ENDITEM, 
		"Name=flightID", "Value=2608-2340-bb", ENDITEM, 
		"Name=4", "Value=on", ENDITEM, 
		"Name=flightID", "Value=18528-3098-bb", ENDITEM, 
		"Name=flightID", "Value=3348-3878-bb", ENDITEM, 
		"Name=flightID", "Value=3362-4676-bb", ENDITEM, 
		"Name=flightID", "Value=14827-5411-bb", ENDITEM, 
		"Name=flightID", "Value=758-6191-bb", ENDITEM, 
		"Name=flightID", "Value=7419-6949-bb", ENDITEM, 
		"Name=flightID", "Value=391-7735-bb", ENDITEM, 
		"Name=.cgifields", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		"Name=removeFlights.x", "Value=40", ENDITEM, 
		"Name=removeFlights.y", "Value=7", ENDITEM, 
		LAST);

	/* Sign off delete ticket */

	lr_think_time(38);

	web_url("SignOff Button_4", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	/* Sign in user 12 delete ticket */

	lr_think_time(15);

	web_submit_data("login.pl_5", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131107.722964763zHtDifDpftAtzDpVcV", ENDITEM, 
		"Name=username", "Value=user12", ENDITEM, 
		"Name=password", "Value=2134", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=45", ENDITEM, 
		"Name=login.y", "Value=5", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_data("login.pl_6", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?username=user12&password=2134", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131107.722964763zHtDifDpftAtzDpVcV", ENDITEM, 
		"Name=username", "Value=user12", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=39", ENDITEM, 
		"Name=login.y", "Value=13", ENDITEM, 
		LAST);

	/* Itinerary user12 delete ticket */

	lr_think_time(12);

	web_url("Itinerary Button_5", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(8);

	web_submit_data("itinerary.pl_2", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=flightID", "Value=1120-788-aa", ENDITEM, 
		"Name=flightID", "Value=2992-1599-aa", ENDITEM, 
		"Name=flightID", "Value=33348-2340-aa", ENDITEM, 
		"Name=flightID", "Value=14827-3103-aa", ENDITEM, 
		"Name=flightID", "Value=18533-3876-aa", ENDITEM, 
		"Name=flightID", "Value=1128-4651-aa", ENDITEM, 
		"Name=flightID", "Value=11120-5403-aa", ENDITEM, 
		"Name=flightID", "Value=3355-6200-aa", ENDITEM, 
		"Name=flightID", "Value=1124-6951-aa", ENDITEM, 
		"Name=flightID", "Value=3718-7722-aa", ENDITEM, 
		"Name=.cgifields", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		"Name=removeFlights.x", "Value=58", ENDITEM, 
		"Name=removeFlights.y", "Value=6", ENDITEM, 
		LAST);

	/* Sign off user12 delete ticket */

	lr_think_time(16);

	web_url("SignOff Button_5", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	/* Sign in user13 delete ticket */

	lr_think_time(11);

	web_submit_data("login.pl_7", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=131107.72782503zHtDifDpHftAtzDpVccf", ENDITEM, 
		"Name=username", "Value=user13", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=47", ENDITEM, 
		"Name=login.y", "Value=7", ENDITEM, 
		LAST);

	/* Itinerary user13 delete ticket */

	lr_think_time(12);

	web_url("Itinerary Button_6", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_submit_data("itinerary.pl_3", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=30776-843-jj", ENDITEM, 
		"Name=flightID", "Value=3730-1594-jj", ENDITEM, 
		"Name=flightID", "Value=22229-2323-jj", ENDITEM, 
		"Name=flightID", "Value=2603-3099-jj", ENDITEM, 
		"Name=5", "Value=on", ENDITEM, 
		"Name=flightID", "Value=1866-3876-jj", ENDITEM, 
		"Name=flightID", "Value=3718-4645-jj", ENDITEM, 
		"Name=flightID", "Value=1500-5423-jj", ENDITEM, 
		"Name=flightID", "Value=11124-6181-jj", ENDITEM, 
		"Name=flightID", "Value=3718-6952-jj", ENDITEM, 
		"Name=flightID", "Value=2603-7714-jj", ENDITEM, 
		"Name=.cgifields", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		"Name=removeFlights.x", "Value=65", ENDITEM, 
		"Name=removeFlights.y", "Value=5", ENDITEM, 
		LAST);

	/* Sign off user13 delete ticket */

	lr_think_time(11);

	web_url("SignOff Button_6", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}