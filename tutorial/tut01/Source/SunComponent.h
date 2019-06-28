/*
  ==============================================================================

    SunComponent.h
    Created: 28 Jun 2019 8:37:32am
    Author:  Rolando Garro

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class SunComponent    : public Component
{
public:
    SunComponent();
    ~SunComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SunComponent)
};
