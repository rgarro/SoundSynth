/*
  ==============================================================================

    GrassComponent.h
    Created: 23 May 2019 1:49:10pm
    Author:  Rolando Garro
        __
    _.-'  \
   (-'     \
    \       \
     \       \
      \  _.-' \
       \'      \
        \       \
         \    .-.\_
          \ .(      )_  _
          _\( `-..-' )`-.\\
         /__'`-._.--' .' )/
VK       \   \- _  .-' .'
          `---`/.\\_.-'
               \_//
  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class GrassComponent    : public Component
{
public:
    GrassComponent();
    ~GrassComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GrassComponent)
};
