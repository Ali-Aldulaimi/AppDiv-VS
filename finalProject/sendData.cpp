/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>*/
#include "appdev.h"



void send_data(rock r) {
	CURL* curl;
	CURLcode res;
	char postdata[100];    // 100 chars should be enough for 3 values 
	// prepare post data 
	sprintf(postdata, "min=%d&max=%d&user=%s", r.min, r.max, r.rname);

	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2001569/testCurl.php");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);

		/*Perform the request , res will get the return code */
		res = curl_easy_perform(curl);
		/* Check fo errors*/
		if (res != CURLE_OK)
			fprintf(stderr, "curl_easy_perform() failed: %s\n", 
				curl_easy_strerror(res));

		curl_easy_cleanup(curl);

	}
curl_global_cleanup();

}