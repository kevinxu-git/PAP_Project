/*!
 * \file FontV1.h
 * \brief Class FontV1
 * \author Kevin XU & Ziheng LI
 * \date 31 Décembre 2018
 */
 
#ifndef FONTV1_H_
#define FONTV1_H_

#include <vector>
#include <cmath>

#include "Point.h"
#include "Image.h"
#include "BezierCurve.h"

class FontV1{
	protected:
		Image img_; /*!< The image on which the letter will be drawn */
		int thickness_ = 20; /*!< The thickness of the letter */
	public:
		/**
		 * @brief Valued constructor
		 * @param imageName The name of the image
		 */
		FontV1(char* imageName) : img_(imageName, 500, 500) {
		};

		/**
		 * @brief Write the letter on the image
		 */
		void finishLetter();

		/**
		 * @brief Draw the contour of the letter A on the Image img_
		 */
		void A();

		/**
		 * @brief Draw the contour of the letter B on the Image img_
		 */
		void B();

		/**
		 * @brief Draw the contour of the letter C on the Image img_
		 */
		void C();

		/**
		 * @brief Draw the contour of the letter D on the Image img_
		 */
		void D();

		/**
		 * @brief Draw the contour of the letter E on the Image img_
		 */
		void E();

		/**
		 * @brief Draw the contour of the letter F on the Image img_
		 */
		void F();

		/**
		 * @brief Draw the contour of the letter G on the Image img_
		 */
		void G();

		/**
		 * @brief Draw the contour of the letter H on the Image img_
		 */
		void H();

		/**
		 * @brief Draw the contour of the letter I on the Image img_
		 */
		void I();

		/**
		 * @brief Draw the contour of the letter J on the Image img_
		 */
		void J();

		/**
		 * @brief Draw the contour of the letter K on the Image img_
		 */
		void K();

		/**
		 * @brief Draw the contour of the letter L on the Image img_
		 */
		void L();

		/**
		 * @brief Draw the contour of the letter M on the Image img_
		 */
		void M();

		/**
		 * @brief Draw the contour of the letter N on the Image img_
		 */
		void N();

		/**
		 * @brief Draw the contour of the letter O on the Image img_
		 */
		void O();

		/**
		 * @brief Draw the contour of the letter P on the Image img_
		 */
		void P();

		/**
		 * @brief Draw the contour of the letter Q on the Image img_
		 */
		void Q();

		/**
		 * @brief Draw the contour of the letter R on the Image img_
		 */
		void R();

		/**
		 * @brief Draw the contour of the letter S on the Image img_
		 */
		void S();

		/**
		 * @brief Draw the contour of the letter T on the Image img_
		 */
		void T();

		/**
		 * @brief Draw the contour of the letter U on the Image img_
		 */
		void U();

		/**
		 * @brief Draw the contour of the letter V on the Image img_
		 */
		void V();

		/**
		 * @brief Draw the contour of the letter W on the Image img_
		 */
		void W();

		/**
		 * @brief Draw the contour of the letter X on the Image img_
		 */
		void X();

		/**
		 * @brief Draw the contour of the letter Y on the Image img_
		 */
		void Y();

		/**
		 * @brief Draw the contour of the letter Z on the Image img_
		 */
		void Z();
};

#endif /* FONTV1_H_ */