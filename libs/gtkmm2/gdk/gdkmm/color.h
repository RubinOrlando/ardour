// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GDKMM_COLOR_H
#define _GDKMM_COLOR_H


#include <glibmm.h>

/* $Id$ */

/* Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gdk/gdkcolor.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GdkColor GdkColor; }
#endif

namespace Gdk
{

class Colormap;

/** Gdk::Color is used to describe an allocated or unallocated color.
 * It contains the following data:
 *   pixel: For allocated colors, the value used to draw this color on the screen.
 *   red: The red component of the color. This is a value between 0 and 65535, with 65535 indicating full intensitiy.
 *   green: The green component of the color.
 *   blue: The blue component of the color.
 */
class Color
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Color CppObjectType;
  typedef GdkColor BaseObjectType;

  static GType get_type() G_GNUC_CONST;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  explicit Color(GdkColor* gobject, bool make_a_copy = true);

  Color(const Color& other);
  Color& operator=(const Color& other);

  ~Color();

  void swap(Color& other);

  ///Provides access to the underlying C instance.
  GdkColor*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const GdkColor* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  GdkColor* gobj_copy() const;

protected:
  GdkColor* gobject_;

private:

public:

  
  /** Instantiate a new Gdk::Color.
   * You should then use the set methods and call Gdk::Colormap::alloc_color().
   */
  Color();

  /** Instantiate a new Gdk::Color.
   * The color is not allocated - you must call Gdk::Colormap::alloc_color() yourself.
   * The text string can be in any of the forms accepted by XParseColor; these include names for a color from rgb.txt,
   * such as DarkSlateGray, or a hex specification such as 305050.
   * @param value the string specifying the color..
   */
  explicit Color(const Glib::ustring& value);

  /** Set a grey color, by using the same value for all color components.
   * @param value The value to be used for the red, green, and blue components.
   */
  void set_grey(gushort value);
  void set_grey_p(double g);

  /** Set the color, by specifying red, green, and blue color component values.
   * @param red_ The red component of the color.
   * @param green_ The green component of the color.
   * @param blue_ The blue component of the color.
   */
  void set_rgb(gushort red_, gushort green_, gushort blue_);

  /** Set the color, by specifying red, green, and blue color component values, as percentages.
   * @param red_ The red component of the color, as a percentage.
   * @param green_ The green component of the color, as a percentage.
   * @param blue_ The blue component of the color, as a percentage.
   */
  void set_rgb_p(double red_, double green_, double blue_);

  void set_hsv(double h, double s, double v);
  void set_hsl(double h, double s, double l);

  /** Parses a textual specification of a color and fills in the red, green, and blue values.
  * The color is not allocated - you must call Gdk::Colormap::alloc_color() yourself.
  * The text string can be in any of the forms accepted by XParseColor; these include names for a color from rgb.txt,
  * such as DarkSlateGray, or a hex specification such as 305050.
  *
  * @param value the string specifying the color.
  * @result true if the parsing succeeded.
  */
  bool set(const Glib::ustring& value);

  #ifndef GDKMM_DISABLE_DEPRECATED

  /** 
   * @deprecated See set().
   */
  bool parse(const Glib::ustring& spec);
  #endif // GDKMM_DISABLE_DEPRECATED


  /** Get the red component of the color.
   * @result The red component of the color.
   */
  gushort get_red() const;

  /** Get the green component of the color.
   * @result The green component of the color.
   */
  gushort get_green() const;

  /** Get the blue component of the color.
   * @result The blue component of the color.
   */
  gushort get_blue() const;

  /** Set the red component of the color.
   * @param value The red component of the color.
   */
  void set_red(gushort value);

  /** Set the green component of the color.
   * @param value The green component of the color.
   */
  void set_green(gushort value);

  /** Set the blue component of the color.
   * @param value The blue component of the color.
   */
  void set_blue(gushort value);

  /** This will fill in the pixel field with the best matching pixel from a color cube.
   * The color is then ready to be used for drawing, e.g. you can call Gdk::GC::set_foreground() which expects pixel to be initialized.
   * Call this after setting the red, green, and blue fields.
   *
   * In many cases, you can avoid this whole issue by calling Gdk::GC::set_rgb_fg_color() or Gdk::GC::set_rgb_bg_color(),
   * which do not expect pixels to be initialized in advance. If you use those methods, there's no need for this method().
   *
   * @param map The colormap for the graphics context and drawable you're using to draw. If you're drawing to a Gtk::Widget, call Gtk::Widget::get_colormap().
   */
  void rgb_find_color(const Glib::RefPtr<Gdk::Colormap>& map);

  /** Get the pixel value, for allocated colors.
   * @result For allocated colors, the value used to draw this color on the screen.
   */
  guint get_pixel() const;

  /** Get the red component of the color, as a percentage.
   * @result The red component of the color, as a percentage.
   */
  double get_red_p() const;

  /** Get the green component of the color, as a percentage.
   * @result The green component of the color, as a percentage.
   */
  double get_green_p() const;

  /** Get the blue component of the color, as a percentage.
   * @result The blue component of the color, as a percentage.
   */
  double get_blue_p() const;


};


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/* These traits are for arrays of GdkColor structs -- not pointer arrays.
 */
struct ColorTraits
{
  typedef Gdk::Color  CppType;
  typedef GdkColor    CType;
  typedef GdkColor    CTypeNonConst;

  static CType   to_c_type      (const CppType& obj) { return *obj.gobj(); }
  static CType   to_c_type      (const CType&   obj) { return obj; }
  static CppType to_cpp_type    (const CType&   obj) { return CppType(const_cast<CType*>(&obj), true); }
  static void    release_c_type (const CType&)       {}
};
#endif //DOXYGEN_SHOULD_SKIP_THIS

typedef Glib::ArrayHandle<Color,ColorTraits> ArrayHandle_Color;

} // namespace Gdk


namespace Gdk
{

/** @relates Gdk::Color
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
bool operator==(const Color& lhs, const Color& rhs);

/** @relates Gdk::Color
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
bool operator!=(const Color& lhs, const Color& rhs);


} // namespace Gdk


namespace Gdk
{

/** @relates Gdk::Color
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(Color& lhs, Color& rhs)
  { lhs.swap(rhs); }

} // namespace Gdk

namespace Glib
{

/** @relates Gdk::Color
 * @param object The C instance
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 */
Gdk::Color wrap(GdkColor* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class Value<Gdk::Color> : public Glib::Value_Boxed<Gdk::Color>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _GDKMM_COLOR_H */

