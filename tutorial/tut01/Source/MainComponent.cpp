/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "Wall.h"
#include "GrassComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    addAndMakeVisible(wall);
    addAndMakeVisible(Grass);
    addAndMakeVisible(root);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll(Colours::skyblue);
    //wall.paint(<#Graphics &#>);
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    /*g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("The revolution wont be televised!", getLocalBounds(), Justification::centred, true);*/
}

void MainComponent::resized()
{
    wall.setBounds(getLocalBounds());
    Grass.setBounds(getLocalBounds());
    root.setBounds(getLocalBounds());
}
