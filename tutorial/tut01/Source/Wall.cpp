/*
  ==============================================================================

    Wall.cpp
    Created: 26 Mar 2019 7:32:24pm
    Author:  Rolando Garro
check it out: https://soundcloud.com/dorje-trolo/redwalldub
  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Wall.h"

//==============================================================================
Wall::Wall()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

Wall::~Wall()
{
}

void Wall::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */
    Rectangle <float> wall(200,200,200,120);
    g.fillCheckerBoard(wall,20, 10, Colours::sandybrown, Colours::saddlebrown);
    g.drawRect(wall);
    /*g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("Wall", getLocalBounds(),
                Justification::centred, true); */  // draw some placeholder text
}

void Wall::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
