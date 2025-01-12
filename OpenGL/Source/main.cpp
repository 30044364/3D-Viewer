#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main(void) {
	glfwInit();

	// GLFW Hints
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	int windowWidth = 800;
	int windowHeight = 800;


	// Creating a window
	GLFWwindow* window = glfwCreateWindow(windowWidth, windowHeight, "3D Viewer, 30044364", NULL, NULL);
	if (window == NULL) {
		std::cerr << "Failed to create a window" << std::endl;
		return -1;
	}

	// Make the current window the context
	glfwMakeContextCurrent(window);


	gladLoadGL();
	glViewport(0, 0, windowWidth, windowHeight);

	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);


	// Keep looping until close button is clicked
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();




	}



	glfwDestroyWindow(window); // Destroy the window when complete
	glfwTerminate();
	return 0;
}