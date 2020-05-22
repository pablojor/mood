#pragma once

#include "Factory.h"
#include "GuiImageC.h"

// FACTORY INFRASTRUCTURE DECLARATION
DECLARE_FACTORY(LifeBarC);

class LifeBarC : public GuiImageComponent {
  private:
    float x_ = 0.0f, y_ = 0.0f;

  public:
    LifeBarC();
    virtual ~LifeBarC();

    virtual void destroy();

    void setInitSize(float x, float y);
    void updateLifeBar(float life, float maxLife);
};
