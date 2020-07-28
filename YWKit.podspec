Pod::Spec.new do |s|
  s.name          = "YWKit"

  s.version       = "0.0.9"

  s.summary       = "YWKit summary"

  s.homepage      = "https://github.com/TimorLeader/YWKit/tree/master"

  s.license       = "MIT"

  s.author             = { "yanwei" => "654811239@qq.com" }

  s.source        = { :git => "https://github.com/TimorLeader/YWKit.git", :tag => "#{s.version}" }

  s.source_files  = "YWKit/YWKit/Source/**/*.{h,m}"

  s.resources     = ['YWKit/YWKit/Source/**/*.{bundle,fsh,vsh,lic,xib}','YWKit/YWKit/Source/**/*.{xib}','YWKit/YWKit/Source/YWImage.xcassets','YWKit/YWKit/Source/*/*.{png,gif,jpg}']

  s.ios.deployment_target = '5.0'

  s.frameworks    = 'UIKit', 'CoreFoundation', 'QuartzCore', 'CoreGraphics','CoreTelephony'

  s.dependency "Masonry"
  s.dependency "MBProgressHUD"
  s.dependency "AFNetworking"

  s.platform      = :ios, "9.0"
  s.requires_arc  = true
end
