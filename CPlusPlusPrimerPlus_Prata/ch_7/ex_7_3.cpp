struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

#include<iostream>

float volume(box box);
void print_box(box box);

int main() {
	box newBox = { "MyBox", 5, 6, 4, 0 };
	print_box(newBox);

	newBox.volume = volume(newBox);

	print_box(newBox);

	std::cout << "Done" << std::endl;
}



float volume(box box) {
	return (box.height * box.width * box.length);
}

void print_box(box box) {
	std::cout << "Maker: " << box.maker << std::endl;
	std::cout << "Height: " << box.height << std::endl;
	std::cout << "Width: " << box.width << std::endl;
	std::cout << "Length: " << box.length << std::endl;
	std::cout << "Volume: " << box.volume << std::endl;
	std::cout << std::endl;
}