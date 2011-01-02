#pragma once

#include "widgets.hpp"

#include "../base/start_mem_debug.hpp"

namespace qt
{
  template <class T>
  GLDrawWidgetT<T>::~GLDrawWidgetT()
  {}

  template <class T>
  void GLDrawWidgetT<T>::paintGL()
  {
    if (m_p)
      DoDraw(m_p);
  }

  template <class T>
  void GLDrawWidgetT<T>::resizeGL(int w, int h)
  {
    if (m_p)
    {
      m_p->onSize(w, h);
      this->DoResize(w, h);
    }
  }
}
