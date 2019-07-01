/*
  ==============================================================================

    TextComponent.h
    Created: 1 Jul 2019 11:20:17am
    Author:  Rolando Garro

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class TextComponent    : public Component
{
public:
    TextComponent();
    ~TextComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TextComponent)
};
