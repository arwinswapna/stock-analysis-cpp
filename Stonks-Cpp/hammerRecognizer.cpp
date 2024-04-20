#include "hammerRecognizer.h" // Include header file for the hammerRecognizer class

namespace Stonks_Cpp {

	// Constructor for bullishRecognizer class
	hammerRecognizer::hammerRecognizer() : recognizer(1, "Hammer")
	{
		// Constructor initializes the hammerRecognizer with a pattern size of 1 and sets the pattern name to "Hammer"
	}

	// Override method to recognize a bullish pattern for a single candlestick
	bool hammerRecognizer::recognize(List<smartCandlestick^>^ sc, int index)
	{
		// Retrieve the candlestick at the specified index from the list
		smartCandlestick^ sc1 = sc[index];
		bool value;

		// Check if the pattern has already been recognized for this candlestick
		if (sc1->Patterns->TryGetValue(patternName, value))
		{
			// If the pattern has already been recognized, return the stored value
			return value;
		}
		else
		{
			// If the pattern has not been recognized, mark it as a hammer and return the result
			sc1->Patterns->Add(patternName, sc1->IsHammer);
			return sc1->IsHammer;
		}
	}
}
