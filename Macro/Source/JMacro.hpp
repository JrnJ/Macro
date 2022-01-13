#ifndef JMACRO_HPP
#define JMACRO_HPP

#include <string>

enum class KeyCode
{
	// Numbers
	Alpha0, Alpha1, Alpha2, Alpha3, Alpha4, Alpha5, Alpha6, Alpha7, Alpha8, Alpha9,

	// Alphabet
	A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,

	// Special
	BackSlash, ForwardSlash, Space, Dot,
	
	// Actions
	LeftShift, RightShift, LeftCtrl, RightCtrl, LeftAlt, RightAlt, Escape, Tab, Backspace, Enter, CapsLock, 

	// Arrows
	ArrowUp, ArrowDown, ArrowLeft, ArrowRight,

	// F-Keys
	F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12,
};

namespace JMacro
{
	// Mouse
	//const void MouseButton();
	//const void MoveMouse();
	//const void SetMousePosition();

	// Keyboard
	const void Keystroke(KeyCode key, bool capital = false);
	const void Keystroke(int key, bool capital = false); // https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
	/*const void KeyDown();
	const void KeyUp();*/
	const void TypeText(std::string text);
};

#endif 
