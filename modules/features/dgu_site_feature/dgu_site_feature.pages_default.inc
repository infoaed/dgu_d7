<?php
/**
 * @file
 * dgu_site_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dgu_site_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'About pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'dgu_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'what_s_data_gov_uk_all_about_';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function dgu_site_feature_default_page_manager_pages() {

  /*
   * The "About" page.
   */
	$page = new stdClass();
	$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
	$page->api_version = 1;
	$page->name = 'about_us';
	$page->task = 'page';
	$page->admin_title = 'Mis on avaandmete portaal?';
	$page->admin_description = 'Mis on avaandmete portaal?';
	$page->path = 'about';
	$page->access = array(
			'type' => 'none',
			'settings' => NULL,
	);
	$page->menu = array(
			'type' => 'normal',
			'title' => 'Mis on avaandmete portaal?',
			'name' => 'menu-footer',
			'weight' => '0',
			'parent' => array(
					'type' => 'none',
					'title' => '',
					'name' => 'navigation',
					'weight' => '0',
			),
	);
	$page->arguments = array();
	$page->conf = array(
			'admin_paths' => FALSE,
	);
	$page->default_handlers = array();
	$handler = new stdClass();
	$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
	$handler->api_version = 1;
	$handler->name = 'page_about_us_panel_context';
	$handler->task = 'page';
	$handler->subtask = 'about_us';
	$handler->handler = 'panel_context';
	$handler->weight = 0;
	$handler->conf = array(
			'title' => 'Panel',
			'no_blocks' => 0,
			'pipeline' => 'standard',
			'body_classes_to_remove' => '',
			'body_classes_to_add' => '',
			'css_id' => 'about-us',
			'css' => '',
			'contexts' => array(),
			'relationships' => array(),
	);
	$display = new panels_display();
	$display->layout = 'dgu_onecol';
	$display->layout_settings = array();
	$display->panel_settings = array(
			'style_settings' => array(
					'default' => NULL,
					'left' => NULL,
					'right' => NULL,
					'middle' => NULL,
			),
			'left' => array(
					'style' => '-1',
			),
	);
	$display->cache = array();
	$display->title = '';
	$display->content = array();
	$display->panels = array();
	$pane = new stdClass();
	$pane->pid = 'new-1';
	$pane->panel = 'middle';
	$pane->type = 'custom';
	$pane->subtype = 'custom';
	$pane->shown = TRUE;
	$pane->access = array();
	$pane->configuration = array(
			'admin_title' => '',
			'title' => '',
			'body' => '<p><strong>Mis on avaandmete portaal?</strong></p>

			<p><a href="http://opendata.riik.ee">Avaandmete portaal</a> ehk teabevärav on mõeldud riigi ja kohalike omavalitsuste loodud avalike <em>andmehulkade</em> info koondamiseks ja uute andmekogude avalikustamise hõlbustamiseks. Ühelt poolt on see koht, kus andmehulkade omanikud ehk <em>teabevaldajad</em> saavad oma avalikke andmhulki registreerida või üles laadida. Teisalt on see koht, kus huvitatud pooled ja tavakodanikud saavad avalikustatud andmehulki otsida, neid alla laadida ja edasiseks töötluseks või päringuteks kasutada.</p>

			<p><strong>Miks on andmete avamine vajalik?</strong></p>

			<p>Andmete avamine ning nende koondamise ja leidmise hõlbustamine teenib mitmeid olulisi eesmärke:</p>

			<ul>
			<li>majanduse elavdamine;</li>
			<li>läbipaistvuse suurendamine;</li>
			<li>teabenõuete arvu vähendamine ja sellega avaliku sektori koormuse vähendamine;</li>
			<li>avatud teenuste loomise ja haldamise võimaldamine era- ja vabasektorile</li>
			<li>õhutada üleminekut tuleviku tehnoloogiatele nagu <a href="http://et.wikipedia.org/wiki/Linkandmed">linkandmed</a>, &quot;<a href="http://en.wikipedia.org/wiki/Internet_of_Things">asjade Internet</a>&quot; ja &quot;<a href="http://en.wikipedia.org/wiki/Big_data">big data</a>&quot;.</li>
			</ul>

			<p><strong>Mis on avaandmed?</strong></p>

			<p>Avaandmete all mõistame kõigile avalikult vabalt kasutamiseks antud, veebist kättesaadavaid, masinloetavas formaadis toorandmeid ilma kasutamis-, patentide- ja levitamispiiranguteta. Üldjuhul, kui seaduses ei ole andmete hankimise eest ette nähtud tasu, saab avaandmeid kätte tasuta ja ilma ligipääsupiiranguteta. Lähemalt võib andmete avalikustamise põhimõtetest, protsessidest ja tehnoloogiatest lugeda <a href="http://opendata.riik.ee/juhendid/juhend-avaandmete-avaldamiseks-ning-avaandemete-portaali-kasutamiseks">siit</a>.</p>

			<p><strong>Mis laadi andmeid siit võib leida?</strong></p>

			<p>Avalikustamisele ning avaandmete portaalis registreerimisele kuuluvad kõik nii riigiametite kui kohalike omavalitsuste loodud andmehulgad, mille avalik kasutus ei ole otseselt keelatud ning mis sisaldavad ka muid andmeid peale isikuandmete. Andmehulkadest, mis sisaldavad nii isikuandmeid kui muid andmeid, avalikustatakse ainult mitte-isikuandmete osad.</p>

			<p>Konkreetsemalt peaksid avalikustatavates andmehulkades sisalduvad andmed olema üldjuhul riigiameti või kohaliku omavalituse poolt loodavad, kogutavad või hallatavad. Riigiamet või omavalitsus võib kokkuleppel mõne kolmanda osapoolega avalikustada ka selle kolmanda osapoole andmeid, kui peab neid avalikkusele piisavalt huvipakkuvaks.</p>

			<p>Taolised andmehulgad võivad olla näiteks lepingutekstide kogud, määruste tekstide kogud, kirjavahetuse metainfo kogud, eelarvefailid, statistikafailid, avalikult loetavasse formaati konverteeritud andmebaasid/registrid või siis neist andmeid väljastavad veebiteenused. Üksikuid lepinguid, määrusi jne ei ole mõistlik käsitleda eraldi andmehulgana, samas kui üksikut andmebaasi tüüpiliselt on mõistlik käsitleda eraldi andmehulgana.</p>

			<p>Avalikustatav andmehulk võib tehnilises mõttes olla nii kogumik inimloetavaid tekstifaile (näiteks seaduste või määruste kogu, ametlike teadete kogu, lepingute kogu) kui kogum masinloetavaid andmeid (näiteks CSV või XML formaadis failideks eksporditud andmebaas või veebiteenus, mis võimaldab otsida ja alla laadida kõiki andmehulga andmeid näiteks json või xml formaadis).</p>

			<p><strong>Kuidas avaandmeid kasutada?</strong></p>

			<p>Avalikustatud andmehulki on võimalik kasutada mitmetel erinevatel viisidel. Näiteks trendianalüüsid teatud poliitikavaldkonna teatud ajalõikes, erinavte riigiametite ja osakondade andmhulkade võrdlemine seoste ja potentsiaalselt uue informatsiooni tuletamiseks jne. Vastava tehnilise võimekusega huvitatud pooled võivad avalikustatud toorandmete baasil luua kasulikke ja huvipakkuvaid rakendusi ning teenuseid kogu avalikkusele.</p>

			<p><strong>Kust ma leian veel informatsiooni?</strong></p>

			<p>Kasutage LISAINFO menüü alt leitavaid täiendavaid materjale või kontakteeruge konkreetsete küsimuste korral <a href="/kontaktid">kontaktide</a> lehel toodud aadressidel.</p>
			',
			'format' => 'filtered_html',
			'substitute' => TRUE,
	);
	$pane->cache = array();
	$pane->style = array(
			'settings' => NULL,
	);
	$pane->css = array();
	$pane->extras = array();
	$pane->position = 0;
	$pane->locks = array();
	$display->content['new-1'] = $pane;
	$display->panels['middle'][0] = 'new-1';
	$pane = new stdClass();
	$pane->pid = 'new-2';
	$pane->panel = 'middle';
	$pane->type = 'panels_mini';
	$pane->subtype = 'what_s_data_gov_uk_all_about_';
	$pane->shown = FALSE;
	$pane->access = array();
	$pane->configuration = array(
			'override_title' => 0,
			'override_title_text' => '',
	);
	$pane->cache = array();
	$pane->style = array(
			'settings' => NULL,
	);
	$pane->css = array();
	$pane->extras = array();
	$pane->position = 1;
	$pane->locks = array();
	$display->content['new-2'] = $pane;
	$display->panels['middle'][1] = 'new-2';
	$display->hide_title = PANELS_TITLE_FIXED;
	$display->title_pane = 'new-1';
	$handler->conf['display'] = $display;
	$page->default_handlers[$handler->name] = $handler;
	$pages['about_us'] = $page;

  /*
   * The "Data" page.
   */

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data';
  $page->task = 'page';
  $page->admin_title = 'Data';
  $page->admin_description = 'Place holder for CKAN data page ';
  $page->path = 'data';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Data',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'data';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'data',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'ckan_datasets';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'ckan_dataset_admin_page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['left'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'ckan_publishers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'ckan_publisher_admin_page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['left'][1] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data'] = $page;

  /*
   * The "Help" page.
   */

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'help';
  $page->task = 'page';
  $page->admin_title = 'Help';
  $page->admin_description = 'Help page with interactive site tours. ';
  $page->path = 'help';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Help',
    'name' => 'management',
    'weight' => '1000',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_help_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'help';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'help-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'dgu_twocol_stacked_50_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Help';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Follow the links on the right hand side to start a guided tutorial for our site.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['left'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'dgu_user-dgu_user_help';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['right'][0] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['help'] = $page;

  return $pages;

}
