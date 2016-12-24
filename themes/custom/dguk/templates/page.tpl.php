<?php
  global $user;
  if (in_array('data publisher', array_values($user->roles))) {
    $user = user_load($user->uid);
  }
?>

<?php if (!($user->uid)): ?>
<div id="toolbar" class="toolbar overlay-displace-top clearfix">
    <div class="toolbar-menu clearfix">
        <div class="menulanguage">
            <?php $block = module_invoke('locale', 'block_view', 'language'); print $block['content']; ?>
        </div>
        <ul id="toolbar-user">
            <li class="logout"><a href="<?php print url('user'); ?>"><img src="/assets/img/icon-log-in-avatar.png" /> <?php print t("Log in") ?></a></li>
        </ul>
        <ul id="toolbar-home">
            <li class="home first last"><a href="<?php print url(''); ?>" title="<?php print t("Home") ?>"><span class="home-link"><?php print t("Home") ?></span></a></li>
        </ul>
    </div>
    <div class="toolbar-drawer clearfix"></div>
</div>
<?php endif ?>

<div id="blackbar" class="<?php print ($user->uid == 1 || in_array('data publisher', array_values($user->roles))) ? 'with' : 'without' ?>-publisher">
    <div class="container">
        <a class="brand" href="/" rel="home">
        </a>

        <?php
          // $main_menu is set to menu-interact and $secondary_menu is set to menu-apps
          // otherwise context doesn't work
          $data_menu = dguk_get_data_menu();
          $apps_menu = dguk_get_apps_menu($secondary_menu);
          $interact_menu = dguk_get_interact_menu($main_menu);

          $active = 1;
          if (strpos($data_menu, 'subnav-data active')) {
            $active = 2;
          }
          if (strpos($apps_menu, 'subnav-apps active')) {
            $active = 3;
          }
          if (strpos($interact_menu, 'subnav-interact active')) {
            $active = 4;
          }
          if (arg(0) == 'user' || (arg(0) == 'admin' && arg(1) == 'workbench')) {
            $active = 1;
          }
        ?>


      <div class="chevron position<?php print $active;?>"></div>
        <nav id="dgu-nav">
          <?php //print dguk_get_main_menu($main_menu);?>
          <div class="text-links">
            <a href="/" title="" class="trigger-subnav nav-home <?php if($active == 1) print 'active'; ?>">AVALEHT</a>
            <a href="/data" class="trigger-subnav nav-data <?php if($active == 2) print 'active'; ?>">ANDMED</a>
            <a href="/apps" class="trigger-subnav nav-apps <?php if($active == 3) print 'active'; ?>">RAKENDUSED</a>
            <a href="/interact" class="trigger-subnav nav-interact <?php if($active == 4) print 'active'; ?>">LISAINFO</a>
          </div>
          <div class="nav-search" style="width: 200px;">
            <form class="input-group input-group-sm" action="/data/search">
              <input type="text" class="form-control" name="q" placeholder="Otsi andmehulki...">
              <span class="input-group-btn">
                <button type="submit" class="btn btn-primary"><i class="icon-search"></i></button>
              </span>
            </form>
          </div>

          <?php $destination = drupal_get_destination(); ?>
<!--          --><?php //print l('<i class="icon-user"></i>', 'user', array('query' => $destination['destination'] == 'home' ? '' : $destination, 'attributes' => array('class' => array('nav-user', 'btn-default', 'btn', 'btn-primary')), 'html' => TRUE)); ?>

          <?php if ($user->uid == 1 || in_array('data publisher', array_values($user->roles))): ?>
            <span class="dropdown toolsmenu">
              <a class="nav-publisher btn btn-info dropdown-button" data-toggle="dropdown" href="#"><i class="icon-wrench"></i></a>
              <ul class="dropdown-menu dgu-user-dropdown" role="menu" aria-labelledby="dLabel">
                <li role="presentation" class="dropdown-header">Tööriistad</li>
                <li><a href="/dataset/new">Lisa andmehulk</a></li>
                <li role="presentation" class="dropdown-header">Minu teabevaldajad</li>
                <?php if (!empty($user->field_publishers)) foreach ($user->field_publishers[LANGUAGE_NONE] as $publisher_ref): ?>

                  <?php $publisher = entity_load_single('ckan_publisher', $publisher_ref['target_id']); ?>

                  <li><a href="/publisher/<?php print $publisher->name?>"><?php print $publisher->title?></a></li>
                <?php endforeach; ?>
              </ul>
            </span>
          <?php endif; ?>


        </nav>
    </div>
</div>
<div id="greenbar" class="">
    <div class="container">
      <?php print $data_menu; ?>
      <?php //print $apps_menu; // Comment out because it can be used in the future. Disable for now because it contains only one item. ?>
      <?php print $interact_menu; ?>
    </div>
</div>
<div id="pre-content">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <?php  print $breadcrumb; ?>
      </div>
    </div>
    <?php if($messages): ?>
      <div class="drupal-messages">
        <div id="messages" ><?php print $messages; ?></div>
      </div>
    <?php endif; ?>
    <?php if($page['highlighted']): ?>
      <?php print render($page['highlighted']); ?>
    <?php endif; ?>
    <?php print render($page['help']); ?>

  </div>
</div>
<div role="main" id="main-content">
  <div class="container">
    <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
    <?php endif; ?>

    <?php if (isset($tabs['#primary'][0]) || isset($tabs['#secondary'][0])): ?>
        <nav class="tabs"><?php print render($tabs); ?></nav>
    <?php endif; ?>
    <div class="row">
      <div class="col-md-12">
        <?php print render($page['content_pre']); ?>

        <?php print render($page['content']); ?>

        <?php print render($page['content_post']); ?>
      </div>
    </div>
  </div>
</div><!--/main-->

        <?php if ($page['sidebar_first']): ?>
            <div class="sidebar-first" id="sidebar1">
                <?php print render($page['sidebar_first']); ?>
            </div>
        <?php endif; ?>

        <?php if ($page['sidebar_second']): ?>
            <div class="sidebar-second" id="sidebar2">
                <?php print render($page['sidebar_second']); ?>
            </div>
        <?php endif; ?>
        <div class="clearfix"></div>
    </div><!--/page-->

</div><!--/.content-container-->

<div class="footer">
    <footer role="contentinfo" class="container">
        <div>
        <?php
        // Print the combined footer menu.
        print dguk_get_footer_menu();
        ?>
        <?php
        // Print anything else in this region.
        print render($page['footer']);
        ?>
		</div>
    </footer>
</div> <!-- /footer -->
