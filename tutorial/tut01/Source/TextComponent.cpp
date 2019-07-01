/*
  ==============================================================================

    TextComponent.cpp
    Created: 1 Jul 2019 11:20:17am
    Author:  Rolando Garro

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "TextComponent.h"

//==============================================================================
TextComponent::TextComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

TextComponent::~TextComponent()
{
}

void TextComponent::paint (Graphics& g)
{
    Font theF("Arial", "regular", 40);
    g.setFont(theF);
    g.drawText("the audio programmer", 10, 10,400,60,Justification::bottomLeft);
}

void TextComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
