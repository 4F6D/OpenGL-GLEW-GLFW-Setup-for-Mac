//
//  main.cpp
//  OpenGL
//
//  Created by Rene on 23.07.23.
//

#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(void) {
    GLFWwindow *window;
    
    // Initialise the library
    if(!glfwInit()) {
        return -1;
    }
    
    // Create a window and its opengl context
    window = glfwCreateWindow(640, 480, "OpenGL Mac Setup", NULL, NULL);
    
    if(!window) {
        glfwTerminate();
        return -1;
    }
    
    // Make the window context current
    glfwMakeContextCurrent(window);
    
    // Loop until user closes the window
    while(!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        
        // Render the OpenGL, All OpenGL Code goes right here
        
        // Swap front and back buffers
        glfwSwapBuffers(window);
        
        // Poll for and process events
        
        glfwPollEvents();
    }
    
    // Close the window
    glfwTerminate();
    return 0;
}
