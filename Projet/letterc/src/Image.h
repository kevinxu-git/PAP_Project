/*!
 * \file Image.h
 * \brief Class Image
 * \author Kevin XU
 * \date 30 Novembre 2018
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#include <stdlib.h>
#include <png.h>
#include <vector>

#include "Point.h"
#include "BezierCurve.h"

class Image {
	private:
		FILE *fp_;
		char *fileName_;
		png_structp pngPtr_;
		png_infop infoPtr_;
		int width_;
		int height_;
		static const png_byte colorType_ = PNG_COLOR_TYPE_RGB;
		static const png_byte bitDepth_ = 8;
		png_bytep *pixels_;
		//int backgroundRGB_[3];

	public:
		//Image();
		/**
		 * @brief Valued constructor
		 * @param x coordinate
		 * @param y coordinate
		 */
		Image(char* fileName, int width, int height);

		/**
		 * @brief Copy-constructor
		 * @param P Point
		 */
		Image(const Image &P);

		/**
		 * @brief Destructor
		 */
		~Image();

		/**
		 * @brief Produce the image
		 */
		void writeImage();

		/**
		 * @brief Getter for pixels_
		 * @return the pixels_ ponter
		 */
		png_bytep* getPixels() const;

		/**
		 * @brief Setter for pixels_
		 * @param pixels the pixels of the image
		 */
		//void setPixels(png_bytep *pixels); // PAS BESOIN car pointeur

		// Draw methods
		/**
		 * @brief Draw a point P
		 * @details Modify the pixels on the image to draw a point
		 * @param P the point to draw
		 */
		void draw(Point P);
		
		/**
		 * @brief Draw the points in the vector
		 * @param points The list of points
		 */
		void draw(std::vector<Point> points);

		/**
		 * @brief Draw the Bezier curves
		 * @param curves The curves to draw
		 */
		void draw(std::vector<BezierCurve> curves);
};


#endif /* IMAGE_H_ */