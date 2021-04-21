#ifndef SPECTRUMONEDETINFOCTRLOBJ_H
#define SPECTRUMONEDETINFOCTRLOBJ_H

#include <lima/HwDetInfoCtrlObj.h>
#include <lima/Debug.h>


namespace lima
{
  namespace SpectrumOne
  {
    class Camera;
    class DetInfoCtrlObj : public HwDetInfoCtrlObj
    {
      DEB_CLASS_NAMESPC(DebModCamera, "DetInfoCtrlObj","SpectrumOne");

    public:
        DetInfoCtrlObj(Camera*);
        virtual ~DetInfoCtrlObj();

        virtual void getMaxImageSize(Size& max_image_size);
        virtual void getDetectorImageSize(Size& det_image_size);

        virtual void getDefImageType(ImageType& def_image_type);
        virtual void getCurrImageType(ImageType& curr_image_type);
        virtual void setCurrImageType(ImageType  curr_image_type);

        virtual void getPixelSize(double& x_size,double &y_size);
        virtual void getDetectorType(std::string& det_type);
        virtual void getDetectorModel(std::string& det_model);

        virtual void registerMaxImageSizeCallback(HwMaxImageSizeCallback& cb);
        virtual void unregisterMaxImageSizeCallback(HwMaxImageSizeCallback& cb);
    private:
        Camera* m_cam;
    };

  } // namespace Prosilica
} // namespace lima


#endif // SPECTRUMONEDETINFOCTRLOBJ_H
