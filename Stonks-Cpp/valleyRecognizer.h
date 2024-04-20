#pragma once
#include "recognizer.h" 

namespace Stonks_Cpp {
	//class for recognizing bullish patterns
	public ref class valleyRecognizer : public recognizer
	{
	public:
		valleyRecognizer();

		// Override method to recognize a bullish pattern 
		virtual bool recognize(List<smartCandlestick^>^ sc, int index) override;
	};
}


