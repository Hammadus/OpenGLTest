#ifndef SHADER_H
#define SHADER_H

#include<iostream>
#include <GL/glew.h>
#include <string>
#include <SDL2/SDL.h>
#include <fstream>


class Shader
{
	public:
		Shader(const std::string& filename);

		void Bind();

		virtual ~Shader();

	protected:
	private:
		static const unsigned int NUM_SHADERS = 2;
		Shader(const Shader& other) {}
		void operator=(const Shader& other) {}

		GLuint m_program;
		GLuint m_shaders[NUM_SHADERS];
};

#endif //SAHDER_H
