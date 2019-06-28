/*
 ==============================================================================
 
 RootComponent.h
 Created: 27 May 2019 7:52:42am
 Author:  Rolando Garro
 
 ==============================================================================
 */

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
 */
class RootComponent    : public Component
{
public:
    RootComponent();
    ~RootComponent();
    
    void paint (Graphics&) override;
    void resized() override;
    
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RootComponent)
};
