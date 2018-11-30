/*!
 * \file Point.h
 * \brief Class Point
 * \author Kevin XU
 * \date 30 Novembre 2018
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>

class Point {
	private:
		int x_;
		int y_;

	public:
		Point();
		/**
		 * @brief Valued constructor
		 * @param x An int
		 * @param y An int
		 */
		Point(int x, int y);

		/**
		 * @brief Copy-constructor
		 * @param P Point
		 */
		Point(const Point &P);

		/**
		 * @brief Getter for x
		 * @return return x
		 */
		int get_x() const;

		/**
		 * @brief Getter for y
		 * @return return y
		 */
		int get_y() const;

		/**
		 * @brief Setter for x
		 * @param x A int
		 */
		void set_x(int x);

		/**
		 * @brief Setter for y
		 * @param y A int
		 */
		void set_y(int y);
};

std::ostream & operator <<(std::ostream & out, const Point & P);

#endif /* POINT_H_ */
