
Pod::Spec.new do |s|


  s.name         = "SHBTools"
  s.version      = "0.0.1"
  s.summary      = "总结了一些平常用的方法."

  s.description  = <<-DESC
  视频转mp4，音频转mp3，获取视频截图，以及系统级的日志打印，还有一些分类。
                   DESC

  s.homepage     = "https://jiutianhuanpei.github.io/"


  s.license      = { :type => 'MIT' }

  s.author       = { "shenhongbang" => "shenhongbang@163.com" }

  s.platform     = :ios, "8.4"
  s.ios.deployment_target = "8.4"


  s.source       = { :git => "https://github.com/jiutianhuanpei/SHBTools.git", :tag => s.version }

  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

   s.ios.vendored_frameworks = 'SHBTools.framework'
   s.frameworks  = "Foundation"
   #s.libraries   = "mp3lame"

   s.requires_arc = true
   s.pod_target_xcconfig = { 'SWIFT_VERSION' => '3.0' }

end
