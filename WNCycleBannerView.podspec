Pod::Spec.new do |s|
  s.name         = 'WNCycleBannerView'
  s.version      = '1.0.0'
  s.license      = 'MIT'
  s.homepage     = 'https://github.com/zhuchuanwu/WNCycleBannerView'
  s.authors      = { '聂建龙' => 'kingxiaokang@gmail.com' }
  s.summary      = 'A Cycle Or Loop ScrollView For Banner'

# Source Info
  s.ios.deployment_target = '6.0'
  s.source       = { :git => 'https://github.com/zhuchuanwu/WNCycleBannerView.git', :tag => '1.0.0' }
  s.source_files = 'WNCycleBannerView/*{h,m}'

  s.requires_arc = true

  s.public_header_files = 'WNCycleBannerView/*.h'
  
# Pod Dependencies
  s.dependency 'SDWebImage'

end