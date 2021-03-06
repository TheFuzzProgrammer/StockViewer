#pragma once
#include  <math.h>
using namespace System;
using namespace std;

namespace TypeConversions {

	float StringToFloat(String^ _string) {
		float LOCAL_FLT = 0;
		int LOG_DEC_ARG = 0;
		String^ TSTR = "";
		bool STR_DELIM = false,
			P_DECIM_LOCAL = false;

		for (int C = 0; C <= _string->Length - 1; C++) {

			if ((_string[C] == ',') || (_string[C] == '.')) {
				STR_DELIM = true;
				P_DECIM_LOCAL = true;
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

				case false:
					TSTR = TSTR + (_string[C].ToString());
					if (P_DECIM_LOCAL && C == _string->Length - 1) {
						LOCAL_FLT += Convert::ToInt32(TSTR) / pow(10, LOG_DEC_ARG);
					}


				}
			}
		}
		return LOCAL_FLT;
	}
}