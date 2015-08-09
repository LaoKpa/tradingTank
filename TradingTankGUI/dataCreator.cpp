#include "dataCreator.h"
#include <Windows.h>
#include "Source.h"
#include "dataCreatorEngine.h"
#include <string>
#include <iostream>

using namespace std;
using namespace System::Windows::Forms;

void startOrStop(short int panelX, short int panelY) {
	if (isRecording){stopRecording();}
	else { startRecording(panelX, panelY); }
}
void mouseMoved(short int mouseX, short int mouseY) {
	updateMousePos(mouseX, mouseY);
}
int updateProgressBar() {
	return getPercentageComplete();
}
