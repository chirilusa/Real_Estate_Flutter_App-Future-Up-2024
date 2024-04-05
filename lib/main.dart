import 'package:flutter/material.dart';
import 'package:flutter_workshop/features/home/ui/desktop/home_desktop_page.dart';
import 'responsive/responsive_layout.dart';
import 'features/home/ui/mobile/home_mobile_page.dart';

void main() {
  runApp(RealEstateApp());
}

class RealEstateApp extends StatelessWidget {

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Real Estate Application',
      debugShowCheckedModeBanner: true,
      theme: ThemeData(primarySwatch: Colors.blue),
      home: ResponsiveLayout(mobilePage: HomeMobilePage(), desktopPage: HomeDesktopPage(),),
    );
  }
}