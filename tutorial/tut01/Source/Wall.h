/*
  ==============================================================================

    Wall.h
    Created: 26 Mar 2019 7:32:24pm
    Author:  Rolando Garroc

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class Wall    : public Component
{
public:
    Wall();
    ~Wall();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Wall)
};
