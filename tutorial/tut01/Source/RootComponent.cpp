/*
  ==============================================================================

    RootComponent.cpp
    Created: 27 May 2019 7:52:42am
    Author:  Rolando Garro

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "RootComponent.h"

//==============================================================================
RootComponent::RootComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

RootComponent::~RootComponent()
{
}

void RootComponent::paint (Graphics& g)
{
    g.setColour(Colours::red);
    Path p;
    p.startNewSubPath(200, 190);
    p.lineTo(400, 190);
    p.lineTo(300, 140);
    g.fillPath(p);
    p.closeSubPath();
    g.strokePath(p, PathStrokeType(15.0f));
}

void RootComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
