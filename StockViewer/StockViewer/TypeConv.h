#pragma once
#include  <math.h>
using namespace System;
using namespace std;

float string_to_float(String^ _string) {
	float LOCAL_FLT;
	int LOG_DEC_ARG = 0;
	String^ TSTR = "";
	bool STR_DELIM, P_DECIM_LOCAL = false;

	for (int C = 0; C == _string->Length -1; C++) {
		
		if ((_string[C] == ',')||(_string[C] == '.')) {
			STR_DELIM = true;
		}
		else
		{	
			if (P_DECIM_LOCAL) {
				LOG_DEC_ARG += 1;
			}
			switch (STR_DELIM) {

				case true:
							LOCAL_FLT += Convert::ToInt32(TSTR);
							TSTR = "";
							STR_DELIM = false;
							P_DECIM_LOCAL = true;
							break;
				case false:
							TSTR = TSTR + (_string[C].ToString());
							if (P_DECIM_LOCAL && C == _string->Length - 1) {
								LOCAL_FLT += Convert::ToInt32(TSTR) / pow(10, LOG_DEC_ARG);
							}
							break;

			}
		}
	}
	return LOCAL_FLT;
}