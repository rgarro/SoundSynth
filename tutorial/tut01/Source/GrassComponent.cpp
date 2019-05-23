/*
  ==============================================================================

    GrassComponent.cpp
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

#include "../JuceLibraryCode/JuceHeader.h"
#include "GrassComponent.h"

//==============================================================================
GrassComponent::GrassComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

GrassComponent::~GrassComponent()
{
}

void GrassComponent::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("GrassComponent", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void GrassComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
